//
// Created by Aone on 2023/4/2.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindow.h" resolved

#include "mainwindow.h"
#include "ui_MainWindow.h"
#include "login.h"
#include <fstream>
#include <QByteArray>
#include "QMessageBox"
#include "index.h"




MainWindow::MainWindow(QWidget *parent) :
        QWidget(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    //登录
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        QString name_1 = ui-> lineEdit ->text();
        QByteArray name_type = name_1.toLatin1();
        char *name_2 = name_type.data();

        QString pass_1 = ui-> lineEdit_2 ->text();
        QByteArray name_type1 = pass_1.toLatin1();
        char *pass_2 = name_type1.data();

        char name[20] = {0};
        char pass[20] = {0};
        ifstream file("../admin.txt",ios::in);
        file >> name;
        ifstream file1("../pass.txt",ios::in);
        file1 >> pass;
//        printf("%s,---,%s",name,name_2);
        if((strcmp(name,name_2) == 0 )&&(strcmp(pass,pass_2) == 0 ) ){
            this->hide();
            index *in = new index();
            in->show();

        }
        else{
            QMessageBox::information(this,"错误","账号或密码错误");
        }





    });
    //注册
    connect(ui->pushButton_2,&QPushButton::clicked,[=](){
        this->hide();
        login *p = new login;
        p->show();
    });
    //清除
    connect(ui->pushButton_3,&QPushButton::clicked,[=](){
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
    });
    //退出
    connect(ui->pushButton_4,&QPushButton::clicked,[=](){
       exit(0);
    });
}

MainWindow::~MainWindow() {
    delete ui;
}
