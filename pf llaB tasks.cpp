#include <iostream>
using namespace std;
int main() 
{
    int number = 160;
    int estimated_value;

    do {
        cout << "Enter your guess (1-200): ";
        cin >> estimated_value;

        if (estimated_value < number) 
		{
            cout << "The number is too low please try again" << endl;
        }
		 else if (estimated_value > number) 
		{
            cout << "The number is too high  please try again." << endl;
        }
		 else  
		{
            cout << "Congrats! You guessed the number" << endl;
        }
    }
	 while (estimated_value != number);

    return 0;
}