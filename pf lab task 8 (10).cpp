#include <iostream>
using namespace std;
int main() 
{
    int num, sum = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    do {
        digit = num % 10;
        sum += digit;
        num /= 10;
    } while (num > 0);

    cout << "Sum of digits: " << sum << endl;

    return 0;
}
