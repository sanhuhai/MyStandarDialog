#include "MyStandarDialog.h"

MyStandarDialog::MyStandarDialog(QWidget *parent)
    : QDialog(parent)
{
    ui.setupUi(this);
    display();
}

void MyStandarDialog::display() {
    label = new QLabel;
    label->setFrameStyle(QFrame::Sunken | QFrame::Panel);
    customerBtn = new QPushButton("用户自定义消息对话框");
    mainLayout = new QGridLayout(this);
    mainLayout->addWidget(customerBtn, 0, 0);
    mainLayout->addWidget(label, 0, 1);
    label->setText("customer Message Box");
    customerMsgBox = new QMessageBox;
    customerMsgBox->setWindowTitle("用户自定义消息框");
    customerMsgBox->setText("这是一个用户自定义的消息框");
    QPushButton* yesPushButton = customerMsgBox->addButton("Yes", QMessageBox::ActionRole);
    QPushButton* noPushButton = customerMsgBox->addButton("No", QMessageBox::ActionRole);
    QPushButton* cancelPushButton = customerMsgBox->addButton("Cancel", QMessageBox::ActionRole);
    customerMsgBox->setIconPixmap(QPixmap("yqz.png"));
    customerMsgBox->exec();
    if (yesPushButton==customerMsgBox->clickedButton()){
        label->setText("Customer Message Box/Yes");
    }
	if (noPushButton == customerMsgBox->clickedButton()) {
		label->setText("Customer Message Box/No");
	}
	if (cancelPushButton == customerMsgBox->clickedButton()) {
		label->setText("Customer Message Box/Cancel");
	}
    connect(customerBtn, SIGNAL(clicked()), this, SLOT(showMyMessageBox()));
}