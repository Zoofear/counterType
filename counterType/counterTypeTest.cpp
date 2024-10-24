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

    cout << "outputting the value of the constructer with a parameter" << endl;
    parametercounter.print();
}