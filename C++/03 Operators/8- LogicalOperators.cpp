#include <iostream>
using namespace std;

int main()
{
    // Logical operators

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
    //---------------------------------------------------------

    // Mixing Logical Operators in C++
    int age {30}, salary {7000}, weight {110};

	cout<<(  (age > 25) && (salary < 8000) && (weight < 150) )<<"\n";
	cout<<(  (age > 25) && (salary < 8000) && (weight > 200) )<<"\n";

	cout<<(  (age > 35) || (salary > 6000) || (weight > 200) )<<"\n";

	cout<<(  (age > 35) && (salary > 6000) || (weight > 200) )<<"\n";
	cout<<(  (age > 20) && (salary > 6000) || (weight > 200) )<<"\n";

	//---------------------------------------------------------
	// () applied first
	int age {30}, salary {7000}, weight {110};

	// ANDs are evaluated
	cout << ( age > 35 || salary > 6000  && weight > 200) << "\n";

	// () are evaluated FIRST even before some ANDS
	cout << ((age > 35 || salary > 6000) && weight > 200) << "\n";

	/*
	Let’s try simplifying
        ● Let’s simplify this expression T && T && (F || (T && T)) || T
        ● T && T && (F || (T && T)) || T ⇒ (T && T) is the simplest (). Its value is T
        ● T && T && (F || T) || T ⇒ (F || T) is the simplest (). Its value is T
        ● T && T && T || T ⇒ No more (). Next is group ands
        ● T && T && T || T ⇒ T && T && T is group of ands. Evaluate to T
        ● T || T. Now final expression is set of conditions ORed ⇒ T
    */
    //--------------------------------------------------------
    /*
    Short-Circuit Evaluation
        ● Stop evaluating when result is determined (efficiency)
        ● Let say we have an expression
        ● T || T && (F || (T && T)) || T ⇒ (T && T)
            ○ Do we really need to evaluate after the first T || <something>
            ○ No. According to OR table, this is definitely TRUE. STOP
        ● T && T && F && (F || (T && T) && (F || (T && T)))
            ○ Do we really need to evaluate after the first T && T && F && <something>
            ○ No. According to AND table, this is definitely False. STOP
        ● Note: In complex expression: some sub-groups are discarded, but still continue evaluating
            ○ Rule: Logically discard what can be discarded, following C++ precedence rules
    */
    //-------------------------------------------------------

    // Short-Circuit Evaluation

    int x { 10 };

	// (x+= 50 > 10) is discarded
	x < 100 || (x+= 50 > 10);

	// (++x > 10) is discarded
	x == 20 && (++x > 50);

	// (++x > 10) is discarded, but (x > 0) eval
	(x == 20) && (++x > 50) || (x > 0);

	// X still 10
	// All evaluated
	(x == 10) && ((++x > 50) || (x > 0));

	// X now 11

	/*
	● Tips
        ○ Don’t make long expressions
        ○ Don’t change variables in expressions this way
    */

    /*
    Coding mistakes
        ● Writing < = NOT <= (extra spaces)
        ● Writing & NOT &&
        ● Writing & & NOT && (extra space)
        ● Writing | not ||
            ○ & and | are called bits operators (later topic)
        ● Writing = not ==
            ○ = is assignment. == is for comparing
        ● Writing ! result NOT !result (extra space)
        ● cout<<x < 5<<"\n";
            ○ Compiler get confused. Use () ⇒ cout<<(x < 5)<<"\n";
        ● Imbalanced expression: (T || (T && F) ⇒ (T || (T && F))
    */
    //-------------------------------------------------------
    /*
    Precedence Table
            Operators (ordered)                      Associativity
            ++, -- (postfix)                         left to right
            ++, -- (prefix), - (unary)               right to left
            * / %                                    left to right
            + -                                      left to right
            < <= > >=                                left to right
            == !=                                    left to right
            &&                                       left to right
            ||                                       left to right
            = += -= *= /= %=                         right to left
    */

	return 0;
}
