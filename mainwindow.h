#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>

#include <QList>
#include <QMessageBox>
#include <QDateTime>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void findFreePorts();
    bool initSerialPort();
    void sendMsg(const QString &msg);

public slots:
    void recvMsg();

private:
    Ui::MainWindow *ui;

    QSerialPort *serialPort;
};

#endif // MAINWINDOW_H
