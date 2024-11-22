#include<iostream>
using namespace std;
int main()
{
	float totalbalance , charges , amount , balance;
	char ser;
	cout << "Choose any of the following service options" << endl;
	cout << "D = Deposit" << endl;
	cout << "W = Withdraw" << endl;
	cout << "T = Transfer" << endl;
	cin >> ser ;
	cout << "Enter the amount = " << endl ;
    cin >> amount ;
    
    switch (ser)
	{
    	case'D':
    		charges = 0.005*amount;
    		balance = amount - charges;
    		totalbalance = amount + charges;
    		cout << "Amount Deposited is = " << amount << endl;
    		cout << "After applying deposited charges the amount is = " << totalbalance << endl ;
    	    break;
    	    
		case'W':
			charges = 0.015*amount ;
			balance = amount - charges;
			totalbalance = amount + charges;
			cout << "Amount for Withdraw is = " << amount << endl ;
			cout << "After applying withdraw charges the amount is = " << totalbalance << endl;
		    break;
		    
		case 'T':
		    charges = 0.025*amount;
			balance = amount - charges;
			totalbalance = amount + charges;
			cout << "Amount to Transfer is = " << amount << endl;
			cout << "After applying transfer charges the amount is =  " << totalbalance << endl;
		    break;
		    
		default:
		   cout << "Invalid Service" << endl;
		
	cout << "Total remaining balance is = " << balance;	   	
	}
	return 0;
}
