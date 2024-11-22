#include<iostream>
using namespace std;
int main()
{
	char op;
	int x , y ;
	cout<<"Enter 1st number: " << endl ;
	cin >> x ;
	cout<<"Enter the 2nd number: " << endl ;
	cin >> y;
	cout<<"Choose any one operation from these (+,-,/,%,*): " << endl ;
	cin >> op;
	
	switch (op) 
	{   case '+':
			cout << x + y ;
			break;
		
		case'-':
			cout << x - y ;
			break;
		
		case'*':
			cout << x * y ;
			break;
		
		case'/':
		    cout << x / y ;
			break;
		
		case'%':
		    cout << x % y ;
			break; 
		
		default:
		    cout<<"Invalid Operator";	
	}
	return 0;
}
