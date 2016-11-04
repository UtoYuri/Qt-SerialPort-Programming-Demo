/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QTextBrowser *comLog;
    QGroupBox *groupBox_2;
    QCheckBox *openCom;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *portName;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *dataBits;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *baudRate;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *stopBits;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *parity;
    QGroupBox *groupBox_3;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_6;
    QTextEdit *message;
    QPushButton *btnSend;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(660, 494);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 361, 351));
        comLog = new QTextBrowser(groupBox);
        comLog->setObjectName(QStringLiteral("comLog"));
        comLog->setGeometry(QRect(10, 20, 341, 321));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(380, 10, 271, 351));
        openCom = new QCheckBox(groupBox_2);
        openCom->setObjectName(QStringLiteral("openCom"));
        openCom->setGeometry(QRect(30, 300, 131, 31));
        widget = new QWidget(groupBox_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 30, 231, 261));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        portName = new QComboBox(widget);
        portName->setObjectName(QStringLiteral("portName"));

        horizontalLayout->addWidget(portName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        dataBits = new QComboBox(widget);
        dataBits->setObjectName(QStringLiteral("dataBits"));

        horizontalLayout_5->addWidget(dataBits);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        baudRate = new QComboBox(widget);
        baudRate->setObjectName(QStringLiteral("baudRate"));

        horizontalLayout_2->addWidget(baudRate);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        stopBits = new QComboBox(widget);
        stopBits->setObjectName(QStringLiteral("stopBits"));

        horizontalLayout_4->addWidget(stopBits);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        parity = new QComboBox(widget);
        parity->setObjectName(QStringLiteral("parity"));

        horizontalLayout_3->addWidget(parity);


        verticalLayout->addLayout(horizontalLayout_3);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 370, 641, 111));
        widget1 = new QWidget(groupBox_3);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 20, 621, 81));
        horizontalLayout_6 = new QHBoxLayout(widget1);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        message = new QTextEdit(widget1);
        message->setObjectName(QStringLiteral("message"));

        horizontalLayout_6->addWidget(message);

        btnSend = new QPushButton(widget1);
        btnSend->setObjectName(QStringLiteral("btnSend"));
        btnSend->setEnabled(false);

        horizontalLayout_6->addWidget(btnSend);

        message->raise();
        message->raise();
        btnSend->raise();
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Qt\344\270\262\345\217\243\351\200\232\344\277\241", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "\351\200\232\344\277\241\346\227\245\345\277\227", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\243\345\217\202\346\225\260", 0));
        openCom->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", 0));
        label->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\357\274\232", 0));
        label_5->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215\357\274\232", 0));
        dataBits->clear();
        dataBits->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "8", 0)
         << QApplication::translate("MainWindow", "7", 0)
         << QApplication::translate("MainWindow", "6", 0)
         << QApplication::translate("MainWindow", "5", 0)
        );
        label_2->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", 0));
        baudRate->clear();
        baudRate->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "9600", 0)
         << QApplication::translate("MainWindow", "4800", 0)
         << QApplication::translate("MainWindow", "19200", 0)
         << QApplication::translate("MainWindow", "38400", 0)
        );
        label_4->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215\357\274\232", 0));
        stopBits->clear();
        stopBits->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", 0)
         << QApplication::translate("MainWindow", "2", 0)
        );
        label_3->setText(QApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215\357\274\232", 0));
        parity->clear();
        parity->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "NoParity", 0)
         << QApplication::translate("MainWindow", "EvenParity", 0)
         << QApplication::translate("MainWindow", "OddParity", 0)
        );
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\345\217\221\351\200\201", 0));
        btnSend->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
