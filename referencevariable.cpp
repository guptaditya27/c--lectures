#include<iostream>
using namespace std;
int main()
{   
    int y=30;
    int &x=y;// way to dewfine and declare reference variable
    // x is having reference of y
    cout<<&y; 
    //x ki  value will never be accses as x is just reference of y so 
    // value of y in output
    
    /*
    reference variable has to be initialized while declaration
    initialize only to a constant
    refernce variable holds/stores reference of initialized variable
    */
    return 0;
}