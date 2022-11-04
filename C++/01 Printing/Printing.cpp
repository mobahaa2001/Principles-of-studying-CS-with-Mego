/*
Recall C++ Program Life Cycle
● 1) Write the Code
● 2) Compile it
○ Compiler: Is there any compile errors? If no, Generates a program
● 4) Run the program(executable):
○ Any run-time errors? If yes, stop.
● Errors types:
○ Compile error: You violated the language syntax rules!
○ Run time error: Good syntax, but program crashes due to error during running
■ Example: Divide by zero.

*/
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!";
    // Now we give command to print a new line.... Once it sees endl command, it gives a new line
    cout << endl;
    ///////////////////////////////////////////

    cout << "I am Mego,";
    cout << " I am from Giza,";
    cout << " I am Studying in HUC.";
    cout << endl;
    /*
        Merge print commands using <<
        We can actually have several print commands
            ○ Each one needs <<
            ○ Use Cout once in line begin
*/
    cout << "I am Mego," << endl
         << " I am from Giza," << endl
         << " I am Studying in HUC.";
    // \n == endl
    cout << "I am Mego,\n I am from Giza,\n I am Studying in HUC.\n";

    return 0;
}
