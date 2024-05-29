#include <iostream>
#include "person.h"

using namespace std;

void person::getdata()
{
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your roll number: ";
    cin >> roll_no;
}

void person::displaydata()
{
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
    cout << "Roll number : " << roll_no << endl;
}