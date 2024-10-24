/*counter(int = 0)(constructor)

The counter is initialized to 0 or a nonnegative integer provided by the user

void reset()

The counter value is set to 0

setCounter(int) : void

The user can input a value for the counter to start at

inncrementCounter() : void

The counter will increase by 1 value

decrementCounter() : void

The counter will decrease by 1 value

getCounter() : int

This will take the current value of the counter and return it

print() : void

This will output the returned value of the counter*/

class counterType
{
public:

    //Constructors
    counterType(int x)
    {
        setCounter(x);
    }

    counterType()
    {
        initializeCounter();
    }

    //Functions
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