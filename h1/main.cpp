#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

// Tulostavat versiot
void calcSum(int a, int b) {
    cout << a << " + " << b << " = " << (a + b) << endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Error: jakaja ei saa olla nolla!" << endl;
        return;
    }
    cout << fixed << setprecision(2)
         << a << "/" << b << " = " << (static_cast<double>(a) / b) << endl;
    cout.unsetf(ios::fixed);
    cout << setprecision(6);
}

// Palauttavat versiot
int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if (b == 0) {
        throw runtime_error("jakaja ei saa olla nolla!");
    }
    return static_cast<float>(a) / b;
}

int main() {
    int a, b;

    // Kysy luvut
    cout << "Anna a: ";
    cin >> a;
    cout << "Anna b: ";
    cin >> b;

    // Tulostavat funktiot
    calcSum(a, b);
    calcDiv(a, b);

    // Palauttavat funktiot
    cout << a << " + " << b << " = " << retSum(a, b) << endl;

    try {
        float result = retDiv(a, b);
        cout << fixed << setprecision(2)
             << a << "/" << b << " = " << result << endl;
        cout.unsetf(ios::fixed);
        cout << setprecision(6);
    } catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
