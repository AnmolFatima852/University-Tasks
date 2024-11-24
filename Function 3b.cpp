#include <iostream>
using namespace std;
int cube(int n) {
    return n * n * n;
}

int main() {
    int num;

    cout << "Enter numbers (0 to stop): ";

    while (true) {
        cin >> num;

        if (num == 0) {
            break;
        }

        int cubed_num = cube(num);
        cout << "Cube of " << num << " is: " << cubed_num << endl;
    }

    return 0;
}