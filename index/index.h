//
// Created by Aone on 2023/4/5.
//

#ifndef ZH_INDEX_H
#define ZH_INDEX_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class index; }
QT_END_NAMESPACE

class index : public QWidget {
Q_OBJECT

public:
    explicit index(QWidget *parent = nullptr);

    ~index() override;

private:
    Ui::index *ui;
};


#endif //ZH_INDEX_H
