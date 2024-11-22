#include <iostream>
using namespace std;
int main() 
{
    int marks;

    cout << "Enter your marks in exam (out of 100): ";
    cin >> marks;

    if (marks >= 90) 
	{
        cout << "Grade: A" << endl;
    }
	 else if (marks >= 80)
	{
        if (marks >= 85) 
		{
            cout << "Grade: B+" << endl;
        } 
		else 
		{
            cout << "Grade: B" << endl;
        }
    } 
	else if (marks >= 70) 
	{
        if (marks >= 75) 
		{
            cout << "Grade: C+" << endl;
        } 
		else 
		{
            cout << "Grade: C" << endl;
        }
    } 
	else if (marks >= 60) 
	{
        cout << "Grade: D" << endl;
    } 
	else 
	{
        cout << "Grade: F" << endl;
    }

    return 0;
}