#include<iostream>
using namespace std;
int main()
{
    int x=100;
    int& ref=x;//ref is refrance to x
    ref=20;//value is now changed to 20
    cout<<"x="<<x<<endl;
    x=30;//value is changed to 30
    cout<<"ref="<<ref<<endl;
    return 0;
}