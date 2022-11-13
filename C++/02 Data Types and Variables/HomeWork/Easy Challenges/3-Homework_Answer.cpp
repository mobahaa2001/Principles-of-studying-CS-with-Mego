#include <iostream>
using namespace std;

int main()
{
    int even1,even2,even3,even4;
    int odd1,odd2,odd3,odd4;

    cin>>even1>>odd1;
    cin>>even2>>odd2;
    cin>>even3>>odd3;
    cin>>even4>>odd4;

    int even_sum = even1+even2+even3+even4;
    int odd_sum = odd1+odd2+odd3+odd4;

    cout<< even1<<endl<<odd_sum<<"\n";

    return 0;
}
