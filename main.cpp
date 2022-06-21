#include "mainwindow.h"

#include <QApplication>
#include <QStyleFactory>
#include <QFontDatabase>
#include <QIODevice>
#include <QFile>

void FontsSerif() {
    int index = QFontDatabase::addApplicationFont(":/fonts/resources/fonts/SourceHanSerifSC-Regular.otf");
    qDebug()<<"index="<<index;
    if(index != -1) {
        QStringList fontList(QFontDatabase::applicationFontFamilies(index));
        if(fontList.count() > 0) {
            //思源宋体Font Family：Source Han Serif SC
        }
    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QApplication::setStyle(QStyleFactory::create("fusion"));

    MainWindow w;
    w.show();
    return a.exec();
}

