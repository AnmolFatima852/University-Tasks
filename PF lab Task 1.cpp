#include <iostream>
using namespace std;
int main ()
{
	
	double width , area , perimeter,length;
	
	cout << "Enter length" << endl;
	cin >> length;
	cout << "Enter width" << endl;
	cin >> width;
	area = length * width;
	cout << "Area of rectangle is " << area << endl;
	
	cout << "Enter length" << endl;
	cin >> length;
	cout << "Enter width" << endl;
	cin >> width;
	perimeter = 2 * (length + width);
	cout << "Perimeter of rectangle is " << perimeter << endl;
	return 0;
	
}