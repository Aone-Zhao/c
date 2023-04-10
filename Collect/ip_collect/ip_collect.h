//
// Created by Aone on 2023/4/10.
//

#ifndef ZH_IP_COLLECT_H
#define ZH_IP_COLLECT_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class ip_collect; }
QT_END_NAMESPACE

class ip_collect : public QWidget {
Q_OBJECT

public:
    explicit ip_collect(QWidget *parent = nullptr);

    ~ip_collect() override;

private:
    Ui::ip_collect *ui;
};


#endif //ZH_IP_COLLECT_H
