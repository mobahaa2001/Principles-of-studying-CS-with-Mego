#include<iostream>
using namespace std;

int main() {
    ///////////////++ operators ///////////////
    /*
    ● ++ is another unary operator
        ○ Prefix operator: ++x
            ■ Pre = before
            ■ Increment x first, then assign its value to right side.
        ○ Postfix operator: x++
            ■ Post = after
            ■ Assign it first to the right side, then increment it
    ● Your turn:
        ○ int a = 5, b = 10;
        ○ cout<<a + 5 + b;
        ○ cout<<++a + 5 + b++;
    */
	int a, b;

	// ++a: prefix increment: increment then assign
	a = 10;
	b = ++a;
	cout<<a<<" "<<b<<"\n";	// 11 11

/*	a = 10;
	cout<<++a<<"\n";	// 11

	// a++: postfix increment: assign then increment
	a = 10;
	b = a++;
	cout<<a<<" "<<b<<"\n";	// 11 10

	a = 10;
	cout<<a++<<"\n";	// 10

	a = 10;
	cout<<(a++)<<"\n";	// 10

	a = 10;
	cout<<a++ + ++a<<"\n";	// undefined
	/*
	● What is problem?: g + ++g
    ● Don’t code like that. This is undefined behaviour
        ○ X + Y: No defined order if X evaluated first or Y.
    ● Tips
        ○ Don’t overuse this operator
        ○ Avoid it using it in complex expressions.
        ○ Expression use a variable more than once?
            ■ Don’t use ++ with this variable
        ○ The best use
            ■ ++x;
            ■ Int temp = x++;
*/

///////////////////////////////////////////////////////////////
    ///////////////-- operators ///////////////

    /*
    ● Same concepts as ++
        ○ Just decrementing
    */
/*
	int x, y;

	// --x: prefix decrement: decrement then assign
	x = 10;
	y = --a;
	cout<<x<<" "<<y<<"\n";	// 9 9

	x = 10;
	cout<<--x<<"\n";	// 9

	// x--: postfix decrement: assign then decrement
	x = 10;
	y = x--;
	cout<<x<<" "<<y<<"\n";	// 9 10

	x = 10;
	cout<<x--<<"\n";	// 10

	x = 10;
	cout<<(x--)<<"\n";	// 10

	x = 10;
	cout<<x-- + --x<<"\n";	// undefined

*/
	return 0;
}

