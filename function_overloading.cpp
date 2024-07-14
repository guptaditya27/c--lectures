// function signature must be different in c++
// fn name/ fn arguments minimum 1 must be differ in both two
#include<iostream>
using namespace std;
int add(int,int);
int add(int,int,int);
int main()
{
    int a,b,c;
    cout<<"Enter three values";
    cin>>a>>b>>c;
    cout<<endl<<"sum of two "<<add(a,b);
    cout<<endl<<"sum of three "<<add(a,b,c);
    return 0;
}
int add(int x,int y)
{
    return x+y;
}
int add(int x,int y,int z)
{
    return x+y+z;
}