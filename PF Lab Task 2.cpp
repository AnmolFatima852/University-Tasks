#include <iostream>
using namespace std;
int main ()
{
	float fahrenheit,celsius;
	
	
	cout << "Enter temperature in Celcius" << endl;
	cin >> celsius;
	fahrenheit = (celsius*9/5)+32;
	cout << "Temperature in fahrenheit is " << fahrenheit << endl;
	
	return 0;
	
}