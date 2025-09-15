#include<iostream>
using namespace std;
template<typename X>
X big(X a,X b)
{
    if(a>b)
        return a;
    return b;
}
int main()
{
   int a=3,b=4;
   cout<<big(a,b)<<endl;
   cout<<big(3.12,4.25);
   return 0;
}