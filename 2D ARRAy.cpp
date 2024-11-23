#include <iostream>
using namespace std;
int main() 
{
    float TicketPrice = 50;
    float PopcornPrice = 80;
    string arr[10];
    float sum = 0;
    int max_users = 10;
    float TotalPrice = 0;

    cout << "How many users will attend the event? (Maximum 10)" << endl;
    cin >> max_users;

    if (max_users > 10) {
        cout << "Error!!! Maximum user limit reached (10)." << endl;
        return 1;
    }

    for (int i = 1; i <=max_users; i++) {
        cout << "Enter name of user " << i  << ": ";
        cin >> arr[i];

        sum = TicketPrice + PopcornPrice;
        TotalPrice += sum;
        cout << "User" << i << ":" << arr[i] << "\tTotal Price: " << sum << endl;
    }

    cout << "Total Price of all users is: " << TotalPrice << endl;

    return 0;
}