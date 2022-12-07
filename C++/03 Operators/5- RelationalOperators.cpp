#include<iostream>
using namespace std;

int main() {
    //////Relational Operators///////
    /////True or False?////////
	cout << (3 > 5) << "\n"; //0
	cout << (3 < 5) << "\n"; //1
	cout << (3 == 5) << "\n"; //0
	cout << (3 >= 5) << "\n"; //0
	cout << (3 >= 3) << "\n"; //1
	cout << (3 == 3) << "\n"; //1
	cout << (3 > 1) << "\n"; //1
	cout << (3 != 4) << "\n"; //1
	cout << (3 != 3) << "\n"; //0

    /////We can also use variables!/////
    int x, y;
	x = 3, y = 5;

	cout << (x > y) << "\n"; //0
	cout << (x < y) << "\n"; //1
	cout << (x == y) << "\n"; //0
	cout << (x >= y) << "\n"; //0

	/////We can use bool variables/////
    int a, b;
	a = 3, b = 5;

	bool result = (a > b);
	cout << result << "\n"; //0

	result = (a < b);
	cout << result << "\n"; //1

	cout << !result << "\n"; //0
	cout << !(a < b) << "\n"; //0

	/////Comparing strings/////
	/*
	● Names are sorted in dictionary
    ● So comparison based on it
    ● Upper case comes first before lower case
        ○ Letter A smaller than a
    */
    string name1 { "ali" }, name2 { "ali mostafa" };
	string name3 {"ziad"}, name4 {"ali"}, name5 {"ALI"};

	cout<<(name1 < name2) <<"\n"; //1
	cout<<(name1 > name3) <<"\n"; //0
	cout<<(name1 != name4) <<"\n"; //0
	cout<<(name1 == name4) <<"\n"; //1

	cout<<(name1 == name5) <<"\n"; //0
	cout<<(name1 > name5) <<"\n"; //1

	/////Double comparisons/////
	/*
	● C++ has an approximate representation for real values
    ● Never compare directly
    ● Later we will learn how to do it
        ○ Feel free to think about the possible semantic
        ○ Hint: Difference between 2 numbers
    */
	double a { 3.0 / 7.0 };
	double b { 1 + 3.0 / 7.0 - 1 };

	//0.428571 0.428571 0 SURPRISE SOMETIMES not 1
	cout<<a<<" "<<b<<" "<<(a == b)<<"\n";

	a = 5.0, b = 4.99999999999999999;

	//5 5 1 SURPRISE SOMETIMES not 0
	cout<<a<<" "<<b<<" "<<(a == b)<<"\n";

	// Never compare doubles for equality directly

	return 0;
}
