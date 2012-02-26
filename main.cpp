#include <QApplication>
#include "subteacherwindow.h"
#include "submanager.h"

int main(int argc, char **argv){
    QApplication app(argc, argv);

    SubteacherWindow sw;
    sw.show();

    SubManager sm("../film.srt");
    qDebug(sm.getSub(132).toAscii());

    return app.exec();
}
