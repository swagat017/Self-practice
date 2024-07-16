#include <iostream>
using namespace std;

class sumComplex;

class complex
{
    float real, img;

public:
    complex() : real(0), img(0) {}
    complex(float r, float i) : real(r), img(i) {}
    void showComplex()
    {
        cout << "The sum is : " << real << " + i" << img << endl;
    }
    friend class sumComplex;
};

class sumComplex
{
public:
    complex addition(complex cc1, complex cc2)
    {
        complex temp;
        temp.real = cc1.real + cc2.real;
        temp.img = cc1.img + cc2.img;
        return temp;
    }
};

int main()
{
    complex c1;
    complex c2(3, 4), c3;
    sumComplex sc;
    c3 = sc.addition(c1, c2);
    c3.showComplex();
    return 0;
}