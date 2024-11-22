#include <iostream>
using namespace std;
int main() {
    int num, sum = 0, digit;

    cout << "Enter two digit number ";
    cin >> num;

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    cout << "Sum of digits: " << sum << endl;

    return 0;
}