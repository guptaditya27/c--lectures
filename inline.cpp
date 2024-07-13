#include<iostream>
using namespace std;
inline int square(int);
int main()
{
    int x,y;
    cout<<"ENter a Number";
    cin>>x;
    y=square(x);
    cout<<"Square of "<<x<<" is "<<y;

    return 0;
}
int square(int x)
{
    return x*x;
}
/* inline compiler ko signal deta hain ki jhaa jhaa fn call ho usko 
fn ke code se replace kr do to fn hone ka fyda+ less time consume*/