#include <iostream>

using namespace std;

int main()
{
    /////////////Arithmetic Operators///////////////////
    /*
        ● Arithmetic: traditional operations (e.g.
        addition) on numbers
        ● Operator: Symbol
            ○ Arithmetic Operators: + - * / %
        ● x + 2 * y - 1
            ○ We call it expression
            ○ + * - are operators
            ○ x, 2, y, 1 are operands
        ● () : Parentheses for order for operations
        ● They are binary operators
            ○ Needs two operands: 3 + 5
    */
    int x {6}, y {3};

	cout << x + y << "\n";			// 9
	cout << x + 2 * y - 1 << "\n";	// 11
	cout << x / y << "\n";			// 2

	int z1 = (x + y) / 3 / 3;		// 1
	cout << z1 << "\n";

    /////////////- and ! operators///////////////////
    /*
        ● -a just change the sign
            ○ 6 ⇒ -6 -6 ⇒ 6
        ● !a (not a): Switch bool
            ○ True ⇒ False False ⇒ True
            ○ 1 ⇒ 0 0 ⇒ 1
                ○ It is part of: logical operators
                    ■ Logic = kind of boolean
                    ■ Called Logical not / negation operator
        ● How many operands? Just one
            ○ Named a unary operato
    */
    int a {6};
	int b {-a};	// -6

	bool male {true};
	bool female { !male }; // False

	// 1 0
	cout << (!0) <<" "<<(!1);

	return 0;
}
