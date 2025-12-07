#ifndef CLASSA2_H
#define CLASSA2_H

#include <string>
using namespace std;
#include "ClassB.h"

class ClassA2
{
private:
    ClassB &refB;          // viittaus B-olioon
public:
    ClassA2(ClassB&);      // Annetaan argumenttina B-luokan olion osoite/viittaus
    string getBinfo();
    void setBinfo(string);
};

#endif
