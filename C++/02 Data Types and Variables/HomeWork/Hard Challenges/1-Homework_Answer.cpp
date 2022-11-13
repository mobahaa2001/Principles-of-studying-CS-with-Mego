#include <iostream>
using namespace std;

int main()
{
    int num1,num2,num3,num4;

    cin>>num1>>num2>>num3;

    num4=num3;
    num3=num1;
    num1=num2;
    num2=num4;

    cout<<num1<<" "<<num2<<" "<<num3<<"\n";
}
