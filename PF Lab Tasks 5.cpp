#include <iostream>
using namespace std;
int main()
{
	float x,y,z,average;
	
	cout << "Enter your marks of 1st subject" << endl ;
	cin >> x;
	cout << "Enter your marks of 2nd subject" << endl;
	cin >> y;
	cout << "Enter your marks of 3rd subject" << endl;
	cin >> z;
	
	average = (x+y+z)/3;
	cout << "The average is " << average << endl;
	if (average>=90)
	{
		cout << "Your grade is A" << endl;
	}
	else if (average>=80)
	{
		cout << "Your grade is B" << endl;
	}
	else if (average>=70)
	{
		cout << "Your grade is C" << endl;
	}
	else if (average>=60)
	{
		cout << "Your grade is D" << endl;
	}
	else 
	{
		cout << "Your grade is F" << endl;
	}
	return 0;
}