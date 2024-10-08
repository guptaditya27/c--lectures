#include<iostream>
using namespace std;
inline int sum(int, int=0);



int square(int x)
{
    return x*x;
}
int main()
{
   int x;
   cout<<"Enter Value of x:- "<<endl;
   cin>>x;
   cout<<"square of "<<x<<" is "<<square(x)<<endl;
   cout<<endl;
   cout<<sum(5);

   return 0;
}
int sum(int a,int b)
{
    return a+b;
}