//
// Created by Aone on 2023/4/2.
//

#ifndef ZH_MAINWINDOW_H
#define ZH_MAINWINDOW_H

#include <QWidget>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QWidget {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

private:
    Ui::MainWindow *ui;
};


#endif //ZH_MAINWINDOW_H
