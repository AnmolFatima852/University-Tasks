#include <iostream>
using namespace std;
int printTempOpinion(int temperature) {
    if (temperature < 10) {
        cout << "Cold" << endl;
    } else if (temperature >= 20 && temperature <= 30) {
        cout << "OK" << endl;
    } else {
        cout << "Hot" << endl;
    }
}

int main() {
    int temperature;

    cout << "Enter the temperature: ";
    cin >> temperature;

    printTempOpinion(temperature);

    return 0;
}