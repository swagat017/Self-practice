#include <iostream>
#define MAX 10
using namespace std;

void getElement(int mat[MAX][MAX], int r, int c)
{
    int arr[MAX][MAX];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "A[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> mat[i][j];
        }
    }
}

void displayElement(int mat[MAX][MAX], int r, int c)
{
    int arr[MAX][MAX];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}

void product(int mat1[MAX][MAX], int mat2[MAX][MAX], int mat3[MAX][MAX], int r1, int c1, int r2, int c2)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            mat3[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main()
{
    int r1, c1, r2, c2;
    int mat1[MAX][MAX], mat2[MAX][MAX], mat3[MAX][MAX];

    cout << "Enter the value of order of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter the value of order of second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2)
    {
        cout << "ERROR!! The given matrices can't be multiplied.\n";
        return -1;
    }

    cout << "Enter elements in first matrix: \n";
    getElement(mat1, r1, c1);

    cout << "Enter elements in second matrix: \n";
    getElement(mat2, r2, c2);
    
    cout << "Your first matrix is:\n";
    displayElement(mat1, r1, c1);

    cout << "Your second matrix is:\n";
    displayElement(mat2, r2, c2);

    product(mat1, mat2, mat3, r1, c1, r2, c2);

    cout << "Product of the given matrices is: \n";
    displayElement(mat3, r1, c2);

    return 0;
}