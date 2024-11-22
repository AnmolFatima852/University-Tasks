#include <iostream>
using namespace std;
int main()
{
    int day;

    cout << "Enter the number for the day of the week" << endl;
    cout << "1 for Monday" << endl;
    cout << "2 for Tuesday" << endl;
    cout << "3 for Wednesday" << endl;
    cout << "4 for Thursday" << endl;
    cout << "5 for Friday" << endl;
    cout << "6 for Saturday" << endl;
    cout << "7 for Sunday" << endl;
    
    cin >> day;

    switch (day) {
        case 1:
            cout << "Start of the workweek." << endl;
            break;
            
        case 2:
            cout << "It's Tuesday, stay productive." << endl;
            break;
            
        case 3:
            cout << "Midweek motivation!" << endl;
            break;
            
        case 4:
            cout << "Almost the weekend." << endl;
            break;
            
        case 5:
            cout << "TGIF!" << endl;
            break;
            
        case 6:
            cout << "Relax, it's Saturday." << endl;
            break;
            
        case 7:
            cout << "Enjoy your Sunday!" << endl;
            break;
            
        default:
            cout << "Invalid day selection." << endl;
            break;
    }

    return 0;
}