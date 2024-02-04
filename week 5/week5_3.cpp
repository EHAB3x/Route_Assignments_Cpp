#include <iostream>
using namespace std;
const int MAX_SIZE = 100;

int sumOfMainDiagonal(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += matrix[i][i];
    }
    return sum;
}

int main() {
    int size;
    cout << "Enter the size of the matrix: ";
    cin >> size;

    int matrix[MAX_SIZE][MAX_SIZE];

    cout << "Enter the elements of the matrix:" << std::endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cin >> matrix[i][j];
        }
    }

    int result = sumOfMainDiagonal(matrix, size);

    cout << "Output: " << result << std::endl;

    return 0;
}
