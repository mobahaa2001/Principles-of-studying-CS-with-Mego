#include <iostream>
using namespace std;

int main()
{

     //////1//////////////////
     /* Do not write any code after return because it does not work
         ● Return 0 tellscompiler we are done.
         ● Lines after it are ignored!
     */
     cout << "I am Mego,";
     return 0;
     cout << endl;
     cout << " I am from Giza,";
     cout << " I am Studying in HUC.";
     cout << endl;
     //////2//////////////////
     /* Code comments: Using //
          ● Any thing in same line after // will not be executed
          ● So comment what you want when you need so
     */
     cout << "I am Mego,";
     cout << endl;
     // cout << " I am from Giza,";
     cout << " I am Studying in HUC.";
     cout << endl;
     return 0;

     //////3//////////////////
     // Code comments: Using /* */
     //     ● If you have many consecutive lines and won’t compiler ignore, put them between /* */
     cout << "I am Mego,";
     cout << endl;
     /* cout << " I am from Giza,";
     cout << " I am Studying in HUC."; */
     cout << endl;
     return 0;
     //////4//////////////////
     // Numbers
     cout << 1 << "\n";               // outout = 1
     cout << 12 << "\n";              // outout = 12
     cout << 123 << " is a number\n"; // outout = 123 is a number
     cout << "123"
          << " is NOT a number\n"; // outout = 123 is NOT a number
     cout << endl;

     cout << 15.7 << "\n";   // outout = 15.7
     cout << -12.52 << "\n"; // outout = -12.52
     cout << endl;

     cout << 1234 << "\n";   // outout = 1234
     cout << 4321 << "\n\n"; // outout = 4321

     cout << 43211234 << "\n";     // outout = 43211234
     cout << 4321 << 1234 << "\n"; // outout = 43211234

     cout << "\nMy luck number is: " << 17 << "\n"; // outout = My luck number is: 17

     return 0;
     //////5//////////////////
     // Math on Numbers
     cout << 1 << "\n";             // outout = 1
     cout << 1 + 2 << "\n";         // outout = 3
     cout << 1 + 2 + 3 << "\n";     // outout = 6
     cout << 1 + 2 + 3 + 4 << "\n"; // outout = 10
     cout << "1+2+3+4"
          << "\n";                                  // outout = 1+2+3+4
     cout << "1+2+3+4=" << 1 + 2 + 3 + 4 << "\n\n"; // outout = 1+2+3+4=10

     cout << 1 + 2 + 3 + 4 - 10 << "\n"; // outout = 0
     cout << 17 - 10 << "\n\n";          // outout = 7

     cout << "2*3*4 = " << 2 * 3 * 4 << "\n";     // outout = 2*3*4 = 24
     cout << "12/2 = " << 12 / 2 << "\n";         // outout = 12/2 = 6
     cout << "12/2/3 = " << 12 / 2 / 3 << "\n\n"; // outout = 12/2/3 = 2

     cout << "6/2 = " << 6 / 2 << "\n";           // outout = 3
     cout << "7/2 = " << 7 / 2 << "\n";           // outout = 3
     cout << "7.0/2.0 = " << 7.0 / 2.0 << "\n\n"; // outout = 3.5

     cout << 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 << "\n";      // outout = 1000000000
     cout << 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 << "\n"; // outout = 1410065408 || Why? Because we added more 10, it gives us a very weird number.
     // This is called overflow
     // Every... Three is limit to your numbers in c++. You can not have very big numbers, And in every language like that, There are some limitations.

     return 0;
     //////6//////////////////
     /* Code Tracing
             ● Pass over the code line by line
             ● Execute the line
     */
     cout
         << "If your dream only includes you, it’s too small\n\n"; // outout = If your dream only includes you, it’s too small
     cout << 30 + 20 + 10 - 10 - 20 - 30 << endl;                  // outout = 0
     cout << "70/10"
          << "\n";                // outout = 70/10
     cout << 80 / 10 / 2 << "\n"; // outout = 4
     return 0;
}
