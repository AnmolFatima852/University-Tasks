#include <iostream>
using namespace std;

int main() 
{
	int i = 1, j;
    int row = 7;
    do {
        j = 1;
        do {
            cout << "*";
            j++;
        } while (j <= i);

        cout << endl;
        i++;
        
    } while (i <= row);

    return 0;
}