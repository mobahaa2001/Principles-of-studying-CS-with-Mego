#include<iostream>
using namespace std;

int main() {
	int a = 0, b = 1;

	cout<<a++<<"\n";
	cout<<++a<<"\n";
	a += 2*b+1;
	b = ++a * 2;
	cout<<a<<" "<<b<<"\n";

	b = a;
	a = 12 + a / 3 / 2 - 2 * 2;
	cout<<a<<"\n";

	a = b;
	a = ((12 + a) / 3 / 2 - 2) * 2;
	cout<<a<<"\n";

	return 0;
}

