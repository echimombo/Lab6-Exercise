#include <iostream>
using namespace std;

int main() {
     
    int rows, columns;

    cout << "Enter number of rows (maximum 3): ";
    cin >> rows;

    cout << "Enter number of columns (maximum 3): ";
    cin >> columns;

    while (rows < 1 || columns < 1 || columns > 3) {
        cout << "Invalid dimensions, Enter values between 1 and 3. " << endl;

        cout << "Enter number of rows: ";
        cin >> rows;

        cout << "Enter number of columns: ";
        cin >> columns;
    }

    double** numbers = new double*[rows];

    for(int i = 0; i < rows; i++) {
        numbers[i] = new double[columns];
    }

    cout << "\nEnter the values of the array:" << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "Enter value for row " << i + 1
                 << ", column " << j + 1 << ": ";
            cin >> numbers[i][j];
        }
    }

    cout << "\nThe values in the array are:" << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << numbers[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] numbers[i];
    }

    delete[] numbers;

    return 0;

}