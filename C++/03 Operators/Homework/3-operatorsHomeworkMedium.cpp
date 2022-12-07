#include<iostream>
using namespace std;

int main() {

	int a = 210;

	a /= 2;
	cout<<a<<"\n";

	cout<<(a /= 3)<<"\n";
	cout<<(a /= 5)<<"\n";
	cout<<(a /= 7)<<"\n";

	cout<<(2+3) * (5-(-3)) / 5 / 8 <<"\n";

	a = 10;
	cout<<a++ + 10<<"\n";
	cout<<++a + 10<<"\n";
	cout<<a-- + 10<<"\n";
	cout<<--a + 10<<"\n";

	int b = 20;
	cout<<a++ + ++b<<"\n";	// Don't code this way

	cout<<a<<"\n";
	++a+=10;	// Don't code this way
	cout<<a<<"\n";



	return 0;
}

