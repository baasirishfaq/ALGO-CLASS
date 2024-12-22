#include <iostream>
using namespace std;

int main()
{
    int rows = 5, cols = 5; // Define dimensions of the matrix
    int matrix[5][5];
    int matrixCenter = (rows * cols / 2) + 1;
    int targetindex;
    int noofmoves;
    int colsecure = 0;
    int rowz, colz;

    // Input the matrix
    cout << "Enter a 5x5 matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {
            cout << "enter element at row " << i + 1 << " and col " << j + 1 << " =";
            cin >> matrix[i][j];
        }
    }

    // Print the matrix to verify
    cout << "The matrix is:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " "; // Print each element
        }
        cout << endl; // Move to the next row
    }
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 1)
            {
                // flag = 1;
                cout << "target element found at row " << i + 1 << " and column " << j + 1 << endl;
                targetindex = (i + 1) * (j + 1);
                colsecure = j + 1;
                rowz = i + 1;
                colz = j + 1;
            }
        }
    }
    cout << "target index  is " << targetindex << endl;
    if (targetindex % 3 == 0)
    {
        cout << "if condition entered" << endl;
        noofmoves = abs(colsecure - 3);
    }
    else if (targetindex > 15)
    {
        noofmoves = abs(matrixCenter - targetindex) / 3;
    }
    else if (targetindex < 6)
    {
        noofmoves = abs(rowz * colz) - 9;
    }
    else
    {
        noofmoves = abs(matrixCenter - targetindex);
    }
    cout << noofmoves << endl;
    cout << "matrixcenter found = " << matrixCenter;
    cout << "target index multiply is found = " << targetindex;
    return 0;
}