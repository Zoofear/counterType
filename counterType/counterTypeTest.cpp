//This files purpose is to test the class counterType and its functions
//

#include <iostream>
#include "counterType.h"

using namespace std; 

int main()
{
    counterType defaultcounter;

    counterType parametercounter(5);

    cout << "outputting the value of the default constructor" << endl;
    defaultcounter.print();

    cout << "outputting the value of the constructer with a parameter of 5" << endl;
    parametercounter.print();

    cout << "showing the ability for the counter to increment and decrement" << endl;

    parametercounter.print();
    parametercounter.incrementCounter();
    parametercounter.print();
    parametercounter.decrementCounter();
    parametercounter.print();

    cout << "showwing the ability for the counter to be reset" << endl;

    parametercounter.print();
    parametercounter.reset();
    parametercounter.print();

    cout << "showing the ability for the counter to recognize it is going into a negative integer" << endl;

    parametercounter.print();
    parametercounter.decrementCounter();

    cout << "showing the ability for the counter to be set to a specific integer" << endl;
    defaultcounter.setCounter(10);
    defaultcounter.print();

    cout << "showing the ability for the counter to recognize when it is trying to be set to a negative integer" << endl;
    defaultcounter.setCounter(-1);
}