#include <iostream>
using namespace std;
int cube(int &n) {
    n = n * n * n;
}

int main() {
    int num;

    cout << "Enter numbers (0 to stop): ";

    while (true) {
        cin >> num;

        if (num == 0) {
            break;
        }

        cube(num);
        cout << "Cube of " << num << " is: " << num << endl;
    }

    return 0;
}