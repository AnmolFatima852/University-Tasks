#include <iostream>
using namespace std;
int swapNumbers(int &a, int &b) 
{
    int temp = a;
    a = b;
    b = temp;
}

int main() 
{
    int a=5;
    int b=10;

    cout << "Before swapping a was " << a << " and b was " << b << endl;

    swapNumbers(a,b);

    cout << "After swapping a is " << a << " and b is " << b << endl;

    return 0;
}