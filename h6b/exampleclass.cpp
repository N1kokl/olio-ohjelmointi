#include "exampleclass.h"

ExampleClass::ExampleClass(QObject *parent)
    : QObject(parent)
{
    qDebug() << "Start";

    // signaali readyToSay kytketään slottiin sayHelloSlot
    connect(this, &ExampleClass::readyToSay,
            this, &ExampleClass::sayHelloSlot);

    qDebug() << "End";
}

void ExampleClass::startToWait()
{
    QThread::msleep(1000);   // odota 1 s
    emit readyToSay();       // emit signaali
}

void ExampleClass::sayHelloSlot()
{
    qDebug() << "Terve";
}
