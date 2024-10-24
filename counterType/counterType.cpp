// counterType.cpp : counterType
// This project will implement a counter that uses any nonnegative integer and iterates up or down by a single value and be able to return the current value of the counter or print it.

#include <iostream>

using namespace std;

class counterType
{
public:
   
    void initializeCounter()    //Initializes the counter at 0
    {
        setCounter(0);          //0 is the default where the counter starts at
    }
    
    void reset()        //Resets the counter to 0
    {
        setCounter(0);  //0 is the default where the counter starts at
    }
    
    void setCounter(int x)  //Sets the counter to whatever integer value placed in the parameter
    {
        if (x < 0)          //Checks to make sure that the integer value is not below 0
        {
            cout << "Your counter cannot be set to below 0, please set it again" << endl;   //Output to let user know their input was below 0 and needs to be changed
            
            counter = 0;    //Sets the counter to the default value of 0 for when this check fails
        }
        else
        {
            counter = x;    //Sets the counter to the parameter as long as the check succedes
        }
    }
   
    void incrementCounter() //Increments the counter by a value of 1
    {
        counter = counter + 1;
    }
   
    void decrementCounter() //Decrements the counter by a value of 1
    {
        if (counter != 0)   //A check to make sure that the counter isnt at 0 and will not go into the negatives
        {
            counter = counter - 1;  //Decrementing by 1
        }
        else
        {
            cout << "This counter cannot go below 0" << endl;   //Output for the negative number check
        }
    }
   
    int getCounter()    //Returns the value of the counter currently
    {
        return counter;
    }
    
    void print()        //Prints the value of the counter currently
    {
        cout << "You're currently at the number: " << counter << endl;
    }

private:
    int counter;        //Variable used as the counter to keep track of whatever is being counted
};

int main()
{

}