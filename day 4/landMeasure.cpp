#include <iostream>
using namespace std;

class LandMeasure
{
    int ropani, ana, paisa, dam;

public:
    LandMeasure()
    {
        ropani = 0;
        ana = 0;
        paisa = 0;
        dam = 0;
    }

    LandMeasure(int a, int b, int c, int d)
    {
        ropani = a;
        ana = b;
        paisa = c;
        dam = d;
    }

    void getData()
    {
        cout << "Enter measure of land in ropani, ana, paisa and dam order:\n"
             << endl;
        cin >> ropani >> ana >> paisa >> dam;
    }

    void display()
    {
        cout << "Ropani : " << ropani << endl;
        cout << "Ana : " << ana << endl;
        cout << "Paisa : " << paisa << endl;
        cout << "Dam : " << dam << endl;
    }

    friend LandMeasure calcLand(LandMeasure &l1, LandMeasure &l2);
};

LandMeasure calcLand(LandMeasure &l1, LandMeasure &l2)
{
    LandMeasure temp;
    temp.ropani = l1.ropani + l2.ropani;
    temp.ana = l1.ana + l2.ana;
    temp.paisa = l1.paisa + l2.paisa;
    temp.dam = l1.dam + l2.dam;

    { // calculation logic for land measure
        temp.paisa += temp.dam / 4;
        temp.dam %= 4;
        temp.ana += temp.paisa / 4;
        temp.paisa %= 4;
        temp.ropani += temp.ana / 16;
        temp.ana %= 16;
    }

    return temp;
}

int main()
{
    LandMeasure L1(2, 14, 4, 5), L3;
    LandMeasure L2(1, 2, 3, 4);

    L3 = calcLand(L1, L2);
    L3.display();
}