//
// Created by Aone on 2023/4/10.
//

// You may need to build the project (run Qt uic code generator) to get "ui_ip_collect.h" resolved

#include "ip_collect.h"
#include "ui_ip_collect.h"


ip_collect::ip_collect(QWidget *parent) :
        QWidget(parent), ui(new Ui::ip_collect) {
    ui->setupUi(this);
    //设置行、列数
    ui->tableView->setLineWidth(5);
    ui->tableView->setAccessibleName("1");
}

ip_collect::~ip_collect() {
    delete ui;
}
