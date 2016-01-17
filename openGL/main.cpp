#include "window.h"
#include <QApplication>
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Window w;

    w.resize(w.sizeHint());
    int desktopArea = QApplication::desktop()->width() *
                      QApplication::desktop()->height();
    int widgetArea = w.width() * w.height();

    w.setWindowTitle("OpenGL");

    if (((float)widgetArea / (float)desktopArea) < 0.75f)
        w.show();
    else
        w.showMaximized();

    return a.exec();
}
