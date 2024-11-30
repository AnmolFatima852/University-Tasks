#include <iostream>
using namespace std;

void fg() {
    int greatest; 
    int v,g;

    cout << "Enter 20 values: " << endl;
    for (int s = 0; s < 20; s++) {
        cin >> v;
        if (v > g) {
            g = v;
        }
    }

    cout << "The greatest integer is: " << g << endl;
}

int main() {
    fg();
    return 0;
}