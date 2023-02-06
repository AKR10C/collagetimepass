#include<iostream>
using namespace std;
int max(int x,int y);//declearation
int main()
{
    int a,b,c;
    cout<<"enter two integers";
    cin>>a>>b;
    c= max(a, b);
    cout<<"c"<<endl;
    return 0;
}
int max(int x,int y)
{
    return x+y;
    
}