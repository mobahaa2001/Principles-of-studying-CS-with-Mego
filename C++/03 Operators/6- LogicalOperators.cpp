#include <iostream>
using namespace std;

int main()
{
    ///// Logical Operators /////

    int age {30}, salary {7000};

	bool result = (age > 25) && (salary < 8000);
	cout<<result<<"\n";

	cout<<(  (age > 25) && (salary > 9000) )<<"\n";

	cout<<(  (age > 35) || (salary < 8500) )<<"\n";
	cout<<(  (age > 35) || (salary > 9000) )<<"\n";
	/*
	● && for AND
    ● || for OR
    ● Precedence: && before ||
    ● Same concepts as truth table, but now in C++
    ● Using (), we force order
    */

	return 0;
}
