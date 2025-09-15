#include<iostream>
using namespace std;
#include<string.h>
#include<cmath>
class Fraction
{
    private:
        int numerator,denominator;
    
    public:
        Fraction(int a=1,int b=1):numerator(a),denominator(b)
        {}
        void print();
        void simplify();
        void operator+(Fraction&);
        friend Fraction sum(Fraction&,Fraction&);


};
Fraction sum(Fraction &f1,Fraction &f2)
{
    Fraction f0;
    // a/b+c/d=(a*d)+(c*b);
    f0.numerator=(f1.numerator*f2.denominator)+(f2.numerator*f1.denominator);
    f0.denominator=(f1.denominator*f2.denominator);
    f0.simplify();
    f0.print();
    //return f0;
}
void Fraction::operator+(Fraction &f)
{
    Fraction f1;
    // a/b+c/d=(a*d)+(c*b);
    f1.numerator=(numerator*f.denominator)+(f.numerator*denominator);
    f1.denominator=(denominator*f.denominator);
    f1.simplify();
    f1.print();
}
void Fraction::simplify()
{
    int i=2;
    while(i<=(numerator>denominator?denominator:numerator))
    {
        while(numerator%i==0&&denominator%i==0)
        {
            numerator/=i;
            denominator/=i;
        }
        i++;
    }
    cout<<numerator<<"/"<<denominator;
    
}
void Fraction::print()
{
    cout<<numerator<<"/"<<denominator<<endl;
}
int main()
{
   Fraction f1(40,50),f2(3,15),f3;
   //f1.print();
   //f1.simplify();
   sum(f1,f2);
    //f3=sum(f1,f2);
    f3.print();
   
   return 0;
}