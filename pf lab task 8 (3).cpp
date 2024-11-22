#include <iostream>

using namespace std;

int main() {
    int i = 0, j = 1, num = 1;

    do {
        do {
            num = i * j;
            cout << i << " x " << j << " = " << num << endl;
            j++;
        } while (j <= 10);

        i++;
        j = 1;
        cout << endl;
    } while (i <= 5);

    return 0;
}
