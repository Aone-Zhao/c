//
// Created by Aone on 2023/4/2.
//


#include "login.h"
#include "ui_login.h"
#include <fstream>
#include "mainwindow.h"
#include "QFile"
#include "QMessageBox"
#include "QDebug"
#include "QByteArray "


login::login(QWidget *parent) :
        QWidget(parent), ui(new Ui::login) {
    ui->setupUi(this);
    MainWindow *p = new MainWindow();
    //注册点击保存
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        QString name = ui->lineEdit->text();
        QString pass = ui->lineEdit_2->text();
        QString pass2 = ui->lineEdit_3->text();
        if(ui->lineEdit_2->text() == ui->lineEdit_3->text()){
            ofstream file("../admin.txt",ios::app );
            file.write(name.toUtf8()+"\n", name.size());
            ofstream name_pass("../pass.txt",ios::app );
            name_pass.write(pass.toUtf8()+"\n", pass.size());
            file.close();
            name_pass.close();
            this->hide();
            p->show();

        }
        else{
            QMessageBox::question(this,"错误","密码效验不通过");
        }
    });
    //注册点击取消
    connect(ui->pushButton_2,&QPushButton::clicked,[=](){
        this->hide();

        p->show();

    });

}

login::~login() {
    delete ui;
}