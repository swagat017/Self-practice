// a code to find all the triplets in an array that sum to a given value
// Time Complexity: O(n^2)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findTriplets(vector<int> &arr, int sum)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();

    for (int i = 0; i < n - 2; i++)
    {
        int l = i + 1;
        int r = n - 1;

        while (l < r)
        {
            if (arr[i] + arr[l] + arr[r] == sum)
            {
                cout << arr[i] << " " << arr[l] << " " << arr[r] << endl;
                l++;
                r--;
            }
            else if (arr[i] + arr[l] + arr[r] < sum)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum = 15;

    findTriplets(arr, sum);

    return 0;
}
