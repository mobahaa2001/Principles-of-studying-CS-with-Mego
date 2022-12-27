#include <iostream>
using namespace std;

int main()
{
    /*
    Multiples
        ● 4 * 1 = 4, 4 * 2 = 8, 4*3 = 12, 4*4 = 16, 4 * 5 = 20, 4*6 = 24, …
        ● So for 4: 4, 8, 12, 16, 20, 24, 28, 32
        ● For 5: 5, 10, 15, 20, 25, 30, 35, 40, …
        ● What is the biggest multiple of 5 less than 30? 25
    */
    //------------------------------------------------------------
    /*
    Division: Integer and fraction parts
        ● 6 / 2 = 3
        ● 12 / 2 = (6+6)/2 = 6/2 + 6/2 = 3 + 3 = 6
        ● 20 / 2 = (12 + 8)/2 = 6 + 4 = 10
        ● 21 / 2 = (20 + 1)/2 = 10+0.5 = 10.5 (integer part = 10, fraction part = 0.5)
        ● 25 / 5 = 5
        ● 26 / 5 = 25/5 + ⅕ = 5.2
        ● 27 / 5 = 25/5 + ⅖ = 5.4
        ● 28 / 5 = 25/5 + ⅗ = 5.6
        ● 29 / 5 = 25/5 + ⅘ = 5.8
        ● 30 / 5 = 30/5 = 6
    */
    //--------------------------------------------------------------
    // Division in C++

    cout << 25 / 5 << "\n";
	cout << 26 / 5 << "\n";
	cout << 27 / 5 << "\n";
	cout << 28 / 5 << "\n";
	cout << 29 / 5 << "\n";
	cout << 30 / 5 << "\n";
	cout << 31 / 5 << "\n";
	cout << "******\n";
	cout << 25 / 5.0 << "\n";
	cout << 26 / 5.0 << "\n";
	cout << 27.0 / 5 << "\n";
	cout << 28.0 / 5.0 << "\n";
	cout << 29.0 / 5.0 << "\n";
	cout << 30.0 / 5.0 << "\n";
	cout << 31.0 / 5 << "\n";

	/*
        ● If both numbers are integers, only integer part is result
            ○ Fraction is ignored
            ○ E.g. 27/5 = 5.4 ⇒ 5
        ● If any of numbers in double style, then normal math
            ○ 27/5 ⇒ 5.4
	*/
	//--------------------------------------------------------
	// Division by 10s

	int num { 12345 };

	cout<<num/10<<"\n";
	cout<<num/100<<"\n";
	cout<<num/1000<<"\n";
	cout<<num/10000<<"\n";
	cout<<num/100000<<"\n";

	cout<<"*********\n";

	cout<<num/10.0<<"\n";
	cout<<num/100.0<<"\n";
	cout<<num/1000.0<<"\n";
	cout<<num/10000.0<<"\n";
	cout<<num/100000.0<<"\n";

    /*
        ● Dividing by 10 removes last digit
        ● Dividing by 100 remove last 2 digits and so on
        ● Notice num/1000 is same as num/10/10/10
    */
    //--------------------------------------------------------
    /*
    Even and odd
        ● Even number is divisible by 2
            ○ E.g. 2, 4, 6, 8, 10, 12, …
            ○ 8/2 = 4 ⇒ Even
            ○ So always number.0
        ● Odd number is not divisible by 2
            ○ E.g. 1, 3, 5, 7, 11, …
            ○ Let’s divide them by 2
            ○ ½ = 0.5
            ○ 3/2 = 1.5
            ○ So 0.5 1.5 2.5 3.5 4.5 5.5
            ○ Like 0.5 + (1, 2, 3, 4, 5….)
            ○ So always number.5
    */
    //----------------------------------------------------------
    // Conversions

    // 8/3 = 2.6666666666666 ..... 6666
	double num {8/3.0};

	cout<<num<<"\n";

	int res = (int)num;	// C casting (style)
	cout<<res<<"\n";

	char ch {'a'};
	int ch_value { (int)ch };

	cout<<ch_value<<"\n";

	cout<<(int)'a'<<" "<<(int)'z'<<"\n";
	cout<<(int)'A'<<" "<<(int)'Z'<<"\n";

    /*
        ● We can convert double to integer
            ○ The fraction part will be removed
        ● Notice also chars canverted to integer
            ○ Every letter has a number
            ○ E.g. small ‘a’ is 97
            ○ Notice why ‘A’ is smaller than ‘a’
        ● To convert using (int)something
            ○ This is C popular style
            ○ Later we will see C++ casting style
                ■ More safer & preferred
    */

	return 0;
}
