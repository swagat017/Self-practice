#include <iostream>
using namespace std;

int &max(int &x, int &y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main()
{
    int t1, t2;
    cout << "Enter two temperatures: ";
    cin >> t1 >> t2;

    max(t1, t2) = 200;
    cout << "The max temperature is: " << max(t1, t2) << endl;

    return 0;
}