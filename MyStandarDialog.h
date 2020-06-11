#pragma once

#include <QtWidgets/QDialog>
#include <QPushButton>
#include <QDialog>
#include <QLabel>
#include <QMessageBox>
#include <QGridLayout>
#include <QPixmap>
#include "ui_MyStandarDialog.h"
#ifdef WIN32
#pragma execution_character_set("utf-8")
#endif // WIN32

class MyStandarDialog : public QDialog
{
    Q_OBJECT

public:
    MyStandarDialog(QWidget *parent = Q_NULLPTR);
    void display();
private slots:
    //void showMyMessageBox();
private:
    Ui::MyStandarDialogClass ui;
    QPushButton* customerBtn;
    QLabel* label;
    QGridLayout* mainLayout;
    QMessageBox* customerMsgBox;
};
