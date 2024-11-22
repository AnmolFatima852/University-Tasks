#include <iostream>
using namespace std;
int main() 
{
	int days = 7;
    float temperature, sum = 0;
    

    for (int a = 1 ; a <= days; a++) {
        cout << "Enter the temperature of the day of the week= " << a << endl ;
        cin >> temperature;
        sum += temperature;
    }

    float averagetemperature = sum / days;
    cout << "The average temperature for the week is= " << averagetemperature << endl;

    return 0;
}