#include<iostream>
using namespace std;

int main() {
    //////////// Assignment operator = /////////////////
    /*
        ● We met this operator a lot.
        ● Int x = 2 * y + 1;
            ○ Lhs = Rhs (left hand side = right hand side)
            ○ Rhs is an expression (12, 10+2, 2 * y + 1, etc)
            ○ It is evaluated, then assigned to lhs
            ○ RHS here is a number, so assignable as int. If it is e.g. string, CE (compiler error)
        ● We can assign several variables
            ○ x = 2*y, y = 10+2, z = x + y
            ○ , here is the comma operator
                ■ evaluates from left to right, return the last after-comma result
                ■ cout<<(10, x=1, y=3+1, x = x+2*y+1, 40); ⇒ 40
*/
    //////////////Assignment operators: += -= *= /=  //////////////
    /*
    ● Num = num + 1
        ○ Compute expression: num+1
        ○ Set value in num
        ○ Same as Num += num
    ● For convenient use
    ● Aka Compound assignment
        ○ combine = with a binary operator
*/
	int num {5};

	num = num + 1;
	cout<<"num1 "<<num<<"\n";	// 6

	num += 1;	// same as num = num+1
	cout<<"num1 "<<num<<"\n";	// 7

	num *= 2;	// same as num = num * 2
	cout<<"num1 "<<num<<"\n";	// 14

	num = num - (-2);
	cout<<"num1 "<<num<<"\n";	// 16

	num -= 10;	// num = num - 10
	num /= 2;	// num = num - 2

	//////////Operators: Big Picture /////////////////
	/*
                    |--------------------------|------------------------------------|
                    |             Operator     |           Type                     |
                    |--------------------------|------------------------------------|
    Unary ------>   | ++,--                    |  Unary operator                    |
                    |--------------------------|------------------------------------|
                   /| +.-.*./.%                |  Arithmetic operator               |
                  / |--------------------------|------------------------------------|
                 /  | <, <=, >, >=, ==, !=     |  Relational operator               |
                /   |--------------------------|------------------------------------|
    Binary operato  | &&, ||, !                |  Logical operator                  |
                \   |--------------------------|------------------------------------|
                 \  | &, |, <<, >>, ~, ^       |  Bitwise operator                  |
                  \ |--------------------------|------------------------------------|
                   \|  =, +=, -=, *=, /=, %=   |  Assignment operator               |
                    |--------------------------|------------------------------------|
  Ternary operator->| ?:                       |  Ternnary or conditional opertor   |
                    -----------------------------------------------------------------
	*/

	return 0;
}

