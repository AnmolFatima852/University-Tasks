#include <iostream>
using namespace std;
int main()
{
	int number,sum=0;
	cout << "Enter any positive number and enter negative number to stop." << endl;
	while (true)
	{
	cin >> number; 
	if (number<0)
	break;
	sum+=number;
	}
	cout << "Sum of all the positive numbers= " << sum << endl;
	return 0;
}