#include<iostream>
using namespace std;
int main()
{
	int val[3];
	cout << "Enter three values :" << endl;
	for(int i=0 ; i<3 ; i++)
	{
    cin >> val[i];		
	}
	cout << "The values in forward order :" << endl;
	for(int i=0 ; i<3 ; i++) 
	{
    cout << val[i] << endl;		
	}
	cout << "The values in reverse order:" << endl;
	for(int i=2 ; i>=0 ; i--)
	{
    cout << val[i] << endl;		
	}
	return 0;
}