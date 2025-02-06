/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTextEdit *output;
    QLineEdit *input;
    QTextEdit *toolTipArea;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(640, 380);
        MainWindow->setMinimumSize(QSize(640, 380));
        MainWindow->setMaximumSize(QSize(640, 380));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(0, 0, 641, 361));
        splitter->setOrientation(Qt::Orientation::Horizontal);
        splitter->setChildrenCollapsible(false);
        widget = new QWidget(splitter);
        widget->setObjectName("widget");
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        output = new QTextEdit(widget);
        output->setObjectName("output");
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier New")});
        font.setPointSize(10);
        font.setBold(true);
        output->setFont(font);
        output->setReadOnly(true);

        verticalLayout->addWidget(output);

        input = new QLineEdit(widget);
        input->setObjectName("input");
        input->setFont(font);

        verticalLayout->addWidget(input);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 4);
        splitter->addWidget(widget);
        toolTipArea = new QTextEdit(splitter);
        toolTipArea->setObjectName("toolTipArea");
        toolTipArea->setFont(font);
        toolTipArea->setReadOnly(true);
        splitter->addWidget(toolTipArea);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 640, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        output->setPlaceholderText(QCoreApplication::translate("MainWindow", "PlaceHolder Text", nullptr));
        input->setPlaceholderText(QCoreApplication::translate("MainWindow", "PlaceHolder Text", nullptr));
        toolTipArea->setPlaceholderText(QCoreApplication::translate("MainWindow", "PlaceHolder Text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
