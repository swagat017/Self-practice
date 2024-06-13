#include <iostream>
#include <cstring>
using namespace std;

class student
{
    char name[49];
    int age;
    static int totalStudents;

public:
    student()
    {
        strcpy(name, "No name");
        age = 0;
        totalStudents++;
    }
    student(const char *nam, int a)
    {
        strcpy(name, nam);
        age = a;
        totalStudents++;
    }

    void getData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: 0";
        cin >> age;
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }

    static void showCounter();
};

void student::showCounter(){
    cout<<"total number of objects created: "<<totalStudents;
}

int student::totalStudents = 0;

int main()
{
    student s1;
    student s2("Swagat", 19);
    student s3;

    s1.display();
    s2.display();
    s3.display();

    student::showCounter();

    return 0;
}