#include <iostream>
using namespace std;

namespace kaski
{
    int c;
    char name[23];
    void displayDetails()
    {
        cout << "\n\nThe details of person from kaski is: \n";
        cout << name << endl
             << c << endl;
    }
}

namespace kathmandu
{
    int c;
    char name[23];
    void displayDetails()
    {
        cout << "\n\nThe details of person from kathmandu is: \n";
        cout << name << endl
             << c << endl;
    }
}

int main()
{
    cout << "Enter the name and then citizenship number of person from kaski: ";
    cin >> kaski::name >> kaski::c;

    cout << "Enter the name and then citizenship number of person from kathmandu: ";
    cin >> kathmandu::name >> kathmandu::c;

    kaski::displayDetails();
    kathmandu::displayDetails();

    return 0;
}