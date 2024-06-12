#include <iostream>
using namespace std;

class complex
{
    double real, img;

public:
    complex() : real(0), img(0) {}
    complex(double r, double i) : real(r), img(i) {}
    complex(complex &c) //explicit copy constructor
    {
        real = c.real;
        img = c.img;
    }

    ~complex()
    {
        cout<<"Destroying the object...\n";
    }

    void display();
};

void complex::display()
{
    cout << real << " + i" << img << endl;
}

int main()
{
    complex c1, c2(3, 4), c3(c2);
    c1.display();
    c2.display();
    c3.display();
    return 0;
}