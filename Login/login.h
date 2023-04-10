//
// Created by Aone on 2023/4/2.
//

#ifndef ZH_LOGIN_H
#define ZH_LOGIN_H

#include <QWidget>
#include <QString>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class login; }
QT_END_NAMESPACE

class login : public QWidget {
Q_OBJECT
public:
    explicit login(QWidget *parent = nullptr);

    ~login() override;

private:
    Ui::login *ui;
};


#endif //ZH_LOGIN_H
