#include <iostream>
using namespace std;
int main() {
    int N;

    cout << "Enter size of the square matrix (N)" << endl;
    cin >> N;

    int matrix[N][N];

    cout << "Enter the elements of the matrix" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Original Matrix" << endl ;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << endl ;
        }
       

    }

    cout << "Taking transpose of matrix" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = i ; j < N; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    cout << "Transposed Matrix is " << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << endl;
        }
        cout << endl;
    }

    return 0;
}