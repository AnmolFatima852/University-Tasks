#include <iostream>
using namespace std; 
int main() 
{ 
    int x; 
    cout << "Write your age: " <<endl ; 
    cin >> x;
    if (x<=0)
    {
    cout << "Invalid age" << endl;
}
    else if (x>=0 && x<=12)
     {
     	cout << "Child" << endl;
	 }
	 else if (x>=13 && x<=19)
	 {
	 if (x==13)	
	 {
	 	cout << "Just a teen" << endl;
	 }
	 else {
	 	cout << "Teenager" << endl;
	 }
}
	 else if (x>=20 && x<=60)
	 {
	 	cout << "Adult" << endl;
	 }
	 else 
	 {
	 	cout << "Senior citizen" << endl;
	 }
    return 0;
}

