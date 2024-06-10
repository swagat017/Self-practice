#include<iostream>
using namespace std;

class rest{
    int num;
    int age;
    char grade;
    public:
    void display()
    {
        cout<<num<<", "<<age<<", "<<grade<<endl;
    }
    rest()
    {
        num = 0 ;
        age = 0;
        grade = ' ';
    }

    rest(int a, int b, char c)
    {
        num = a;
        age = b;
        grade = c;
    }
};

int main()
{
    rest r1(2,4,'g');
    rest r2 = r1;
    rest r3;
    r1.display();
    r2.display();
    r3.display();
    return 0;
}