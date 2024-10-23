#ifndef CBUILDINGDIALOG_H
#define CBUILDINGDIALOG_H

#include <QDialog>
#include<QtWidgets>

class CBuildingDialog : public QDialog
{
    Q_OBJECT

public:
    CBuildingDialog(QWidget *parent = nullptr);
    ~CBuildingDialog();
private:
    QTextEdit*      displayTextEdit;
    QPushButton*    colorPushBtn;
    QPushButton*    errorPushBtn;
    QPushButton*    filePushBtn;
    QPushButton*    fontPushBtn;
    QPushButton*    inputPushBtn;
    QPushButton*    pagePushBtn;
    QPushButton*    progressPushBtn;
    QPushButton*    printPushBtn;
    QPushButton*    exitPushBtn;
private slots:
    void doPushBtn();
};
#endif // CBUILDINGDIALOG_H
