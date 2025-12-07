#include <iostream>
#include "ClassB.h"
#include "ClassA1.h"
#include "ClassA2.h"

using namespace std;

int main()
{
    // ---------- Osoitin ----------
    int a = 5;
    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;

    int *pointerA = &a;
    cout << "Pointterin osoittama osoite on: " << pointerA << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << endl;

    // ---------- Referenssi ----------
    int &refA = a;
    cout << "refA osoittaa osoitteeseen on: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;

    int b = 6;

    // Kokeile itse:
    // refA = b;      // tämä EI vaihda refA:n osoitetta, vaan kopioi b:n arvon a:han
    pointerA = &b;    // pointteri voidaan vaihtaa osoittamaan b:hen

    // ---------- Olio argumenttina (kopio) ----------
    cout << "\n=== Olio-esimerkki (kopio) ===" << endl;
    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);                     // B-olion KOPIO
    objA1.setBinfo("Olion objA1 asettama info");

    cout << "objB:  " << objB.getInfo() << endl;
    cout << "objA1: " << objA1.getBinfo() << endl;

    // ---------- Referenssi argumenttina ----------
    cout << "\n=== Olio-esimerkki (referenssi) ===" << endl;
    ClassB &refB = objB;                     // viittaus samaan B-olioon
    ClassA2 objA2(refB);                     // A2 saa viittauksen B:hen
    objA2.setBinfo("Olion Agr asettama info");

    cout << "objB:  " << objB.getInfo() << endl;
    cout << "objA2: " << objA2.getBinfo() << endl;

    return 0;
}
