#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtCore>
#include<QtGui>
#include<QFileDialog>
#include<QFile>
#include<QTextStream>
#include<QMessageBox>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    // In your main window class declaration


private slots:
    void on_actionNew_triggered();

    void on_actionCopy_triggered();

    void on_actionCut_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_as_triggered();

    void on_actionPaste_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionSave_triggered();

    void on_actionResume_triggered();

private:
    Ui::MainWindow *ui;
    QString mFilename;

};
#endif // MAINWINDOW_H
