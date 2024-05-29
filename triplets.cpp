#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout << "Enter number of elements in an array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements in an array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int targetSum;
    cout << "Enter target sum: ";
    cin >> targetSum;

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == targetSum)
                {
                    cout << "Triplet is: " << arr[i] << ", " << arr[j] << ", " << arr[k] << endl;
                }
            }
        }
    }

    return 0;
}