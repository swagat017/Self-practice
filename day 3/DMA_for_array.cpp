//to find average of an array using dma for array.

#include<iostream>
using namespace std;

int main ()
{
    int n;
    float *p, sum = 0, avg;

    cout << "Enter a number: ";
    cin >> n;

    p = new float[n];
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        sum += p[i];
    }

    avg = sum / n;

    cout << "The sum of all elements in given array is: " << sum << endl;
    cout << "The average of given array is: " << avg << endl;

    delete []p;

    return 0;
}