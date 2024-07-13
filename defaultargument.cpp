#include<iostream>
using namespace std;
int add(int,int,int=0);/* while declaring fn we are providing
default value of argument if default value of 3rd argument ==0 if not provided*/
int main()
{
    int a,b;
    cout<<"Enter Two number:- ";
    cin>>a>>b;
    int c;
    cout<<"Enter 3rd value"<<endl;
    cin>>c;
    cout<<"sum of a and b is "<<add(a,b);// default value of c assigned
    cout<<endl;
    cout<<"sum of a,b,c is "<<add(a,b,c);// passed value of c will assign


    return 0;
}
int add(int x,int y,int z)
{
    return x+y+z;
}