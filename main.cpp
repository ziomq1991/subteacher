#include <QApplication>
#include "subteacherwindow.h"

int main(int argc, char **argv){
    QApplication app(argc, argv);

    SubteacherWindow sw;
    sw.show();

    return app.exec();
}
