#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->serialPort = new QSerialPort;
    findFreePorts();

    connect(ui->openCom, &QCheckBox::toggled, [=](bool checked){
        if (checked){
            initSerialPort();
            ui->btnSend->setEnabled(true);
        }else{
            this->serialPort->close();
            ui->btnSend->setEnabled(false);
            ui->openCom->setChecked(false);
        }
    });

    connect(this->serialPort, SIGNAL(readyRead()), this, SLOT(recvMsg()));
    connect(ui->btnSend, &QPushButton::clicked, [=](){
        sendMsg(ui->message->toPlainText());
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

//寻找空闲状态串口
void MainWindow::findFreePorts(){
    QList<QSerialPortInfo> ports = QSerialPortInfo::availablePorts();
    for (int i = 0; i < ports.size(); ++i){
        if (ports.at(i).isBusy()){
            ports.removeAt(i);
            continue;
        }
        ui->portName->addItem(ports.at(i).portName());
    }
    if (!ports.size()){
        QMessageBox::warning(NULL,"Tip",QStringLiteral("找不到空闲串口"));
        return;
    }
}
//初始化串口
bool MainWindow::initSerialPort(){
    this->serialPort->setPortName(ui->portName->currentText());
    if (!this->serialPort->open(QIODevice::ReadWrite)){
        QMessageBox::warning(NULL,"Tip",QStringLiteral("串口打开失败"));
        return false;
    }
    this->serialPort->setBaudRate(ui->baudRate->currentText().toInt());

    if (ui->dataBits->currentText().toInt() == 8){
        this->serialPort->setDataBits(QSerialPort::Data8);
    }else if (ui->dataBits->currentText().toInt() == 7){
        this->serialPort->setDataBits(QSerialPort::Data7);
    }else if (ui->dataBits->currentText().toInt() == 6){
        this->serialPort->setDataBits(QSerialPort::Data6);
    }else if (ui->dataBits->currentText().toInt() == 5){
        this->serialPort->setDataBits(QSerialPort::Data5);
    }

    if (ui->stopBits->currentText().toInt() == 1){
        this->serialPort->setStopBits(QSerialPort::OneStop);
    }else if (ui->stopBits->currentText().toInt() == 2){
        this->serialPort->setStopBits(QSerialPort::TwoStop);
    }


    if(ui->parity->currentText() == "NoParity"){
        this->serialPort->setParity(QSerialPort::NoParity);
    }else if (ui->parity->currentText() == "EvenParity"){
        this->serialPort->setParity(QSerialPort::EvenParity);
    }else if (ui->parity->currentText() == "OddParity"){
        this->serialPort->setParity(QSerialPort::OddParity);
    }
    return true;
}
//向串口发送信息
void MainWindow::sendMsg(const QString &msg){
    this->serialPort->write(QByteArray::fromHex(msg.toLatin1()));
    ui->comLog->insertPlainText(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") + " [send] " + msg + "\n");
}
//接受来自串口的信息
void MainWindow::recvMsg(){
    QByteArray msg = this->serialPort->readAll();
    //do something
    ui->comLog->insertPlainText(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") + " [recieve] " + msg.toHex().data() + "\n");
}
