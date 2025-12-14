#include <QCoreApplication>
#include "exampleclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ExampleClass obj;
    obj.startToWait();   // odottaa hetken ja emitoi signaalin -> slot tulostaa "Terve"

    return 0;            // tälle tehtävälle riittää tämä
}
