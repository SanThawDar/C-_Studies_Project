/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Button8;
    QPushButton *Button9;
    QPushButton *Divide;
    QPushButton *Button7;
    QPushButton *MemAdd;
    QPushButton *Button4;
    QPushButton *Button5;
    QPushButton *Button6;
    QPushButton *Multiply;
    QPushButton *MemClear;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button3;
    QPushButton *Add;
    QPushButton *MemGet;
    QPushButton *Clear;
    QPushButton *Button0;
    QPushButton *ChangeSign;
    QPushButton *Subtract;
    QPushButton *Equal;
    QLineEdit *Display;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(710, 440);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#COCOCO;\n"
"	border: 1px solid gray,\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray,\n"
"	padding: 5px;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy1);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #D3D3D3;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button8, 2, 1, 1, 1);

        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        sizePolicy1.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy1);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #D3D3D3;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button9, 2, 2, 1, 1);

        Divide = new QPushButton(centralwidget);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        sizePolicy1.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy1);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FFA500;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Divide, 2, 3, 1, 1);

        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        sizePolicy1.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy1);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #D3D3D3;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button7, 2, 0, 1, 1);

        MemAdd = new QPushButton(centralwidget);
        MemAdd->setObjectName(QString::fromUtf8("MemAdd"));
        sizePolicy1.setHeightForWidth(MemAdd->sizePolicy().hasHeightForWidth());
        MemAdd->setSizePolicy(sizePolicy1);
        MemAdd->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FFA500;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemAdd, 2, 4, 1, 1);

        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        sizePolicy1.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy1);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #D3D3D3;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button4, 3, 0, 1, 1);

        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        sizePolicy1.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy1);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #D3D3D3;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button5, 3, 1, 1, 1);

        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        sizePolicy1.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy1);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #D3D3D3;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button6, 3, 2, 1, 1);

        Multiply = new QPushButton(centralwidget);
        Multiply->setObjectName(QString::fromUtf8("Multiply"));
        sizePolicy1.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy1);
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FFA500;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Multiply, 3, 3, 1, 1);

        MemClear = new QPushButton(centralwidget);
        MemClear->setObjectName(QString::fromUtf8("MemClear"));
        sizePolicy1.setHeightForWidth(MemClear->sizePolicy().hasHeightForWidth());
        MemClear->setSizePolicy(sizePolicy1);
        MemClear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FFA500;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemClear, 3, 4, 1, 1);

        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        sizePolicy1.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy1);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #D3D3D3;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button1, 4, 0, 1, 1);

        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        sizePolicy1.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy1);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #D3D3D3;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button2, 4, 1, 1, 1);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        sizePolicy1.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy1);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #D3D3D3;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button3, 4, 2, 1, 1);

        Add = new QPushButton(centralwidget);
        Add->setObjectName(QString::fromUtf8("Add"));
        sizePolicy1.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy1);
        Add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FFA500;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Add, 4, 3, 1, 1);

        MemGet = new QPushButton(centralwidget);
        MemGet->setObjectName(QString::fromUtf8("MemGet"));
        sizePolicy1.setHeightForWidth(MemGet->sizePolicy().hasHeightForWidth());
        MemGet->setSizePolicy(sizePolicy1);
        MemGet->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FFA500;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemGet, 4, 4, 1, 1);

        Clear = new QPushButton(centralwidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        sizePolicy1.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy1);
        Clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #D3D3D3;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Clear, 5, 0, 1, 1);

        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        sizePolicy1.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy1);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #D3D3D3;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button0, 5, 1, 1, 1);

        ChangeSign = new QPushButton(centralwidget);
        ChangeSign->setObjectName(QString::fromUtf8("ChangeSign"));
        sizePolicy1.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy1);
        ChangeSign->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #D3D3D3;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ChangeSign, 5, 2, 1, 1);

        Subtract = new QPushButton(centralwidget);
        Subtract->setObjectName(QString::fromUtf8("Subtract"));
        sizePolicy1.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy1);
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FFA500;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Subtract, 5, 3, 1, 1);

        Equal = new QPushButton(centralwidget);
        Equal->setObjectName(QString::fromUtf8("Equal"));
        sizePolicy1.setHeightForWidth(Equal->sizePolicy().hasHeightForWidth());
        Equal->setSizePolicy(sizePolicy1);
        Equal->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #FFA500;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Equal, 5, 4, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        sizePolicy.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Serif"));
        font.setPointSize(18);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;\n"
"	padding: 5px;\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 2, 5);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 710, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Button8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Button9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        Button7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        MemAdd->setText(QCoreApplication::translate("MainWindow", "M+", nullptr));
        Button4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Button5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Button6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Multiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        MemClear->setText(QCoreApplication::translate("MainWindow", "M-", nullptr));
        Button1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Button2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Button3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        MemGet->setText(QCoreApplication::translate("MainWindow", "M", nullptr));
        Clear->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        Button0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        ChangeSign->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        Subtract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        Display->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
