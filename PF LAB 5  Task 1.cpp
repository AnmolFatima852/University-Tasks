#include <iostream>
using namespace std; 
int main() 
{ 
    int x; 
    cout << "Write any integer: "; 
    cin >> x;
    if (x > 0) 
   { if (x > 100) 
   {
    cout << "The number is large" << endl; 
	} 
    else 
   { 
    cout << "The number is small" << endl; 
	} 
	} 
    else if (x < 0) 
   { if (x < -100) 
{
    cout << "The number is very small" << endl;
	 }
   else 
{   cout << "The number is small and negative" << endl; 
} 
} 
   else 
{ 
   cout << "The number is zero" << endl; 
   } 
   return 0; 
   }