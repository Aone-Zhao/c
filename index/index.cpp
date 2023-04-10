//
// Created by Aone on 2023/4/5.
//

// You may need to build the project (run Qt uic code generator) to get "ui_index.h" resolved

#include "index.h"
#include "ui_index.h"


index::index(QWidget *parent) :
        QWidget(parent), ui(new Ui::index) {
    ui->setupUi(this);
}

index::~index() {
    delete ui;
}
