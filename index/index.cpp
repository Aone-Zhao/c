//
// Created by Aone on 2023/4/5.
//

// You may need to build the project (run Qt uic code generator) to get "ui_index.h" resolved

#include "index.h"
#include "ui_index.h"
#include "QPushButton"
#include "ip_collect/ip_collect.h"


index::index(QWidget *parent) :
        QWidget(parent), ui(new Ui::index) {
    ui->setupUi(this);
    //点击域名搜集
    connect(ui->pushButton, &QPushButton::clicked, [=]() {
        this->hide();
        ip_collect *p = new ip_collect();
        p->show();

    });

}

index::~index() {
    delete ui;
}
