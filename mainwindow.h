#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QDebug>
#include<QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void socketDisconnected();
    void socketConnected();
    void socketReadyRead();
    void printMessage(QString message);

private slots:
    void on_connectButton_clicked();

    void on_sendButton_clicked();

private:
    Ui::MainWindow *ui;
    bool connectedToHost;
    QTcpSocket* socket;
};
#endif // MAINWINDOW_H
