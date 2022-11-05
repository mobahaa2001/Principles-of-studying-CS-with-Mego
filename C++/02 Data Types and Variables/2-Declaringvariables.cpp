#include <iostream>
using namespace std;

int main()
{
    ///////Declaring Variables///////

    // int for integer
    int age = 21;
    cout << age << "\n";

    // double used for fraction
    double myWeight = 66.7;
    cout << "My weight is " << myWeight << "\n";
    ////////////////////////////////
    // Declare variable in memory. Garbage value
    int number1;
    int number2;

    // Assign values (in memory(
    number1 = 30;
    number2 = 10;

    // Get values
    cout << number1 + number2 << "\n";
    cout << number1 - number2 << "\n";

    // Reassign value
    number1 = 50;
    cout << "2n+1 = " << number1 * 2 + 1 << "\n";

    ////////////////////////////////////////////
    // Other important data types
    double weight = -92.5;

	char group = 'd';

	bool is_male = true;
	bool like_football = false;

	int age = 55;
	string name = "mostafa";

	cout<<"I am "<<age<<" years old\n";
	cout<<"My weight is "<<weight<<"\n";

	cout<<"my name is "<<name
		<<" and group "<<group<<"\n"
		<<is_male<<" "<<like_football<<"\n";
    ////////////////////////////////////////////
    /*
    The right datatype….the right way
        ● What is the average of 10 and 21?
            ○ (10 + 21) / 2 = 15.5
        ● I1 and I2 are wrong as data types
            ○ We need to use double as result is fraction!
            ○ So d1 and d2 as double are good
        ● But why d1 is still wrong?
            ○ Compiler do the following
        ■ 10 + 21/2 = 10 + 10.5 = 20.5
            ○ To force priority for sum, we use ()
            ○ (10 + 21) / 2 = 21/2 = 11.5
    */
    int a = 10;
	int b = 21;

	int i1 = a + b / 2;		// 20
	int i2 = (a + b) / 2;	// 15

	double x = 10.0;
	double y = 21;

	double d1 = x + y / 2.0;	// 20.5
	double d2 = (x + y) / 2.0;	// 15.5
    ////////////////////////////////////////////
    /*
    Datatypes has min and max values to store
        ● int: -2147483648 to 2147483647
        ● char: -128 to 127 [there was a typo]
        ● bool: 0 to 1
        ● If you tried lower value => underflow
        ● If you tried bigger value => overflow
            ○ int val = 2147483647 + 1;
        ■ We are adding 1 more than the max value!
        ■ Compiler msg: warning: integer overflow in expression
    */

    return 0;
}
