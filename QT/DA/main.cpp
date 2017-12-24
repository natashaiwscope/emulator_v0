
#include <QApplication>

#include "dialog.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    bool smallScreen = QApplication::arguments().contains("-small-screen");

    Dialog dialog(0, smallScreen);

    if (!smallScreen)
        dialog.show();
    else
        dialog.showFullScreen();
    return app.exec();
}
