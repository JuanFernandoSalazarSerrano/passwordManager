#include <QApplication>
#include <QMainWindow>
#include <QWidget>
#include <QVBoxLayout>

QMainWindow*mainWindow;

int maint(int argc, char *argv[]){

    QApplication app(argc, argv);

    return 0;
}

void setupUI(){

    mainWindow = new QMainWindow;
    mainWindow->setWindowTitle("Password manager");
}
