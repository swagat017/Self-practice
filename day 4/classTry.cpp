#include <iostream>
#include <cstring>
using namespace std;

class employee;

class student
{
    char name[50];
    int age, roll;

public:
    student()
    {
        strcpy(name, "Unknown");
        age = 0;
        roll = 0;
    }

    student(const char *nam, int a, int r)
    {
        strcpy(name, nam);
        age = a;
        roll = r;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll: " << roll << endl;
    }

    friend void accesas(student &s1, student &s2, student &s3, employee &e1, employee &e2);
};

class employee
{
    char name[90];
    double salary;

public:
    employee()
    {
        strcpy(name, "NULL");
        salary = 0;
    }

    employee(const char *nam, double sal)
    {
        strcpy(name, nam);
        salary = sal;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    friend void accesas(student &s1, student &s2, student &s3, employee &e1, employee &e2);
};

void accesas(student &s1, student &s2, student &s3, employee &e1, employee &e2)
{
    cout << s1.name << endl;
    cout << s2.name << endl;
    cout << s3.name << endl;
    cout << e1.name << endl;
    cout << e2.name << endl;
}

int main()
{
    student s1;
    s1.display();

    cout << endl;

    student s2("Swagat", 19, 48);
    s2.display();

    student s3("Nepal", 19, 95);

    employee e1;
    e1.display();

    cout << endl;

    employee e2("Ramesh", 100000);

    cout << "Calling friend function....\n";
    accesas(s1, s2, s3, e1, e2);

    return 0;
}