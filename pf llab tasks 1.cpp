#include <iostream>
using namespace std;
int main() 
{
    int attempts = 0;
    int max_attempts = 3;
    string secret_password = "abcdef1";
    string userpassword;

    do 
	{
        cout << "Enter the password: ";
        cin >> userpassword;
        attempts++;

        if (userpassword == secret_password) 
		{
            cout << "Correct Password, You have logged in successfully" << endl;
            
        }
		 else 
		{
            cout << "Incorrect password" << endl;
        }
    }
	 while (attempts < max_attempts);

    if (attempts == max_attempts && userpassword != secret_password) 
	{
        cout << "Maximum login attempts reached, Access is restricted." << endl;
    }

    return 0;
}
