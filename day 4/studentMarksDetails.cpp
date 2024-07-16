#include<iostream>
#include<cstring>
using namespace std;

class Students{
    string name;
    int roll;
    float marks;

    public:
    Students():name("unknown"), roll(0), marks(0.0){}
    Students(string name, int roll, float marks) : name(name), roll(roll), marks(marks){}

    void display(){
        cout << "Name : " << name << endl;
        cout << "Roll no : " << roll << endl;
        cout << "Marks : " << marks << endl;
    }

    friend void sortByMarks(Students &s1, Students &s2);
};

void sortByMarks(int marks){

}