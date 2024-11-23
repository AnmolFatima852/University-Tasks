#include <iostream>
using namespace std;
int main() 
{
    float Entryfee = 100;
    float Snackcost = 70;
    string arr[15];
    float sum = 0;
    int max_students = 15;
    float Totalcost = 0;

    cout << "How many students  will attend the game night? (Maximum 15)" << endl;
    cin >> max_students;

    if (max_students > 15) {
        cout << "Error!!! Not more students allowed." << endl;
        return 1;
    }

    for (int i = 1; i <=max_students; i++) {
        cout << "Enter name of students " << i  << ": ";
        cin >> arr[i];

        sum = Entryfee + Snackcost;
        Totalcost += sum;
        cout << "Students" << i << ":" << arr[i] << "\tTotal Cost: " << sum << endl;
    }

    cout << "Total cost of entry and snacks: " << Totalcost << endl;

    return 0;
}