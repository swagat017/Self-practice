#include <iostream>
using namespace std;

int main()
{
    int *a = new int;
    cout << "Enter a number: ";
    cin >> *a;

    cout << "The inputted number is: " << *a;
    delete a;
    return 0;
}