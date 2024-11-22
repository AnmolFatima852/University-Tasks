#include <iostream>
using namespace std;
int main() 
{
    int n, i = 1, fact = 1;

    cout << "Enter any positive number ";
    cin >> n;

    
    if (n < 0) {
        cout << "Error!!" << endl;
        return 1;
    }

    while (i <= n) {
        fact *= i;
        i++;
    }

    cout << "Factorial of " << n << " = " << fact << endl;

    return 0;
}