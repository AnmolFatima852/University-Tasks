#include <iostream>
using namespace std;
int swapNumbers(int a, int b) 
{
	a = 10;
	b = 20;
    int temp = a;
    a = b;
    b = temp;
}

int main() 
{
    int x=30;
    int y=40;

    cout << "Before swapping x was " << x << " and y was " << y << endl;

    swapNumbers(x,y);

    cout << "After swapping x is " << x << " and y is " << y << endl;

    return 0;
}
