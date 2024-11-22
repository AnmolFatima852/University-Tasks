#include <iostream>
using namespace std;
int main ()
{
	int initialbalance, withdrawalamount;
	cout << "Enter your initial balance." << endl;
	cin >> initialbalance;
	while (true)
	{
		cout << "Enter the amount you want to wihdraw (0 to exit)" << endl;
		cin >> withdrawalamount;
		if (withdrawalamount == 0)
		{
			break;
		}
		if (withdrawalamount > initialbalance)
		{
			cout << "Insufficient Balance" << endl;
		}
		else
		{
			initialbalance -= withdrawalamount;
			cout << "Your transaction is completed successfully. Your remaining balance is " << initialbalance << endl;
		}
	}
	return 0;
}