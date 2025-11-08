#include "Car.h"
#include <vector>
using namespace std;

int main() {
    vector<Car> carList;


    carList.emplace_back("polestar",    "2",         2023);
    carList.emplace_back("Tesla",       "Model S",  2018);
    carList.emplace_back("Volkswagen",  "ID7",      2025);

    carList[1].printData();

    for (size_t i = 0; i < carList.size(); ++i) {
        if (i == 1) continue;
        carList[i].printData();
    }


    return 0;
}
