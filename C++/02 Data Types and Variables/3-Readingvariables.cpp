#include<iostream>
using namespace std;

int main()
{
    /*
        Reading variables
            ● In previous times we learned how to print
                ○ We used cout<<
                ○ Remember: C = Console - Out = Output
            ● To read we use cin>>
                ○ C = console, in = Input
            ● Steps
                ○ Define a variable
                ○ Read it
                    ■ Wait user enter input from the console

    */
    //////////////////////////////////////////////////////////////

	int num;

	cout<<"Enter your lucky number\n";

	cin>>num;

	cout<<"********\n";
	cout<<2 * num + 1<<"\n";

	/*
        Reading an integer
            ● The compiler behaviour:
                ○ Line 21: Declare variable in memory: num
                ○ Line 23: Print Enter your lucky number
                ○ Line 25: Trying to read number
                    ■ Compiler here FREEZES
                    ■ It waits you enter a number
    */
////////////////////////////////
    int a, b;

	cout << "Enter 2 numbers\n";

	cin >> a >> b;

	cout << a * b << " " << a + b << "\n";
	/*
    Reading an integer
        ● Let’s input 10
        ● So num in memory assigned 10
        ● Print 2 * 10 + 1 ⇒ 21
        ● Remember
            ○ Don’t enter value low or more than min/max value
	*/
	/*
	Reading multiple numbers
        ● Remember we print multiple things
        ● We can also read multiple things using a single command
        ● Here we read 2 numbers and do 2 operations
            ○ We input 2 and 5
	*/
/////////////////////////////////////////////////
	int age;
	cout<<"Enter age: ";
	cin>>age;

	double weight;
	cout<<"Enter weight: ";
	cin>>weight;

	char group;
	cout<<"Enter group: ";
	cin>>group;

	string name;
	cout<<"Enter name: ";
	cin>>name;

	cout<<"I am "<<name<<" belongs to group "<<group<<"\n";
	cout<<"My weight "<<weight<<" and age "<<age;
	/*
	Reading different data types
        ● We can read several types
    */

	return 0;
}
