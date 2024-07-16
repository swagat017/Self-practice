#include <iostream>
using namespace std;

class Twice
{
    int x, y;

public:
    Twice() : x(0), y(0) {}
    Twice(int a, int b) : x(a), y(b) {}
    void getData()
    {
        cout << "Enter two numbers: " << endl;
        cin >> x >> y;
    }
    friend void displayTwiceSum(Twice &T1);
};

void displayTwiceSum(Twice &T1)
{
    int sum = 2 * T1.x + 2 * T1.y;
    cout << "The sum two times entered by the user is: " << sum << endl;
}

int main()
{
    Twice T;
    T.getData();
    displayTwiceSum(T);

    Twice t1;
    displayTwiceSum(t1);

    Twice t2(2, 3);
    displayTwiceSum(t2);

    return 0;
}