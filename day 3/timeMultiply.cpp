#include <iostream>
using namespace std;

class Time
{
    int hr, min, sec;

public:
    Time()
    {
        hr = 0;
        min = 0;
        sec = 0;
    }
    Time(int a, int b, int c)
    {
        hr = a;
        min = b;
        sec = c;
    }
    int getHr()
    {
        return hr;
    }
    int getMin()
    {
        return min;
    }
    int getSec()
    {
        return sec;
    }
    void setTime(int p, int q ,int r)
    {
        hr = p; 
        min = q;
        sec = r;
    }
    void display()
    {
        cout<<"hr: "<<hr<<" min: "<<min<<" sec: "<<sec<<endl;
    }
};

Time multiplyTime(Time T1 , int k)
{
    Time temp;
    int hr = k*T1.getHr();
    int min = k*T1.getMin();
    int sec = k*T1.getSec();
    temp.setTime(hr, min, sec);
    return temp;
}

int main ()
{
    Time T1(2, 4, 5);
    Time T2 = multiplyTime(T1, 2);
    T1.display();
    T2.display();

    return 0;
}