#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float x = 0.02345;
    cout << fixed << setprecision(3) << x << endl;
    cout << scientific << x << endl;

    return 0;
}