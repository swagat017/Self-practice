#include <iostream>
using namespace std;

int orderOfMatrix()
{
    int n;
    cout << "Enter order of matrix: ";
    cin >> n;
    return n;
}

void enterElementsInMatrix(int n, int mat[][100])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "MAT[" << i << "]" << "[" << j << "] : ";
            cin >> mat[i][j];
        }
    }

    // display matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

bool validityTest(int order, int mat[][100])
{
    for (int i = 0; i < order; i++)
    {
        bool rowCheck[order + 1] = {false};

        for (int j = 0; j < order; j++)
        {
            int element = mat[i][j];
            if (element < 1 || element > order || rowCheck[element])
            {
                return false;
            }
            rowCheck[element] = true;
        }
    }

    for (int j = 0; j < order; j++)
    {
        bool colCheck[order + 1] = {false};

        for (int i = 0; i < order; i++)
        {
            int element = mat[i][j];
            if (element < 1 || element > order || colCheck[element])
            {
                return false;
            }
            colCheck[element] = true;
        }
    }

    return true;
}

int main()
{
    int k = orderOfMatrix();
    int mat[100][100];

    enterElementsInMatrix(k, mat);

    if (validityTest(k, mat))
    {
        cout << "The matrix is valid.\n";
    }
    else
    {
        cout << "The matrix is not valid.\n";
    }
    return 0;
}
