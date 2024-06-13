#include <iostream>
using namespace std;

class complex
{
    double real, img;

public:
    complex() : real(0), img(0) {}

    complex(double re, double im) : real(re), img(im) {}

    void getData()
    {
        cout << "Enter a complex number: " << endl;
        cin >> real >> img;
    }

    void display()
    {
        cout << real << " + i" << img << endl;
    }

    friend complex addComplex(complex &c1, complex &c2);
};

complex addComplex(complex &c1, complex &c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

int main()
{
    complex c1;
    complex c2;
    complex c3;

    c1.getData();
    c2.getData();

    cout<<"The first complex number is:\n";
    c1.display();

    cout<<"The second complex number is:\n";
    c2.display();

    c3 = addComplex(c1, c2);
    cout<<"The added complex number is:\n";
    c3.display();

    return 0;
}