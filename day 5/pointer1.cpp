#include <iostream>
#include <cstring>
using namespace std;

class car
{
public:
    string colour;
    car()
    {
        colour = "Black";
    }

    car(string colr)
    {
        colour = colr;
    }

    void display()
    {
        cout << "The colour of the car is: " << colour << endl;
    }
};

int main()
{
    string car::*clr = &car::colour;
    void (car::*displayClr)() = &car::display;

    car c1;
    cout << c1.colour << endl; // non pointer obj & non pointer data member
    cout << c1.*clr << endl;   // non pointer obj & pointer data member

    c1.display();       // non pointer obj & non pointer member function
    (c1.*displayClr)(); // non pointer obj & pointer member function

    car c2("white");
    car *op;
    op = &c2;
    cout << op->colour << endl; // pointer obj & non pointer data member
    cout << op->*clr << endl;   // pointer obj & pointer data member

    op->display();       // pointer obj & non pointer member function
    (op->*displayClr)(); // pointer obj & pointer member function

    return 0;
}