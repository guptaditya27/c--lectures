#include<iostream>
using namespace std;
#include<stdio.h>
class Complex
{
   private:
      double real,imaginary;
   public:
      Complex(double,double);
      Complex();
      void print();
      void Input(double=0,double=0 );
      bool operator==(Complex &);
      Complex Conjugate();
      void Conjugate(Complex&);
      bool is_conjugate(Complex);
      /*friend void operator+(Complex&,Complex &);
      friend void operator-(Complex&,Complex&);
      friend void operator*(Complex&,Complex&);
      friend void operator/(Complex&,Complex&);*/
      Complex operator+(Complex&);
      Complex operator-(Complex&);
      Complex operator*(Complex&);
      Complex operator/(Complex&);
      

      Complex(Complex &);

      Complex Inverse();
      friend void Inverse(Complex&);




      


};
/*void operator+(Complex&a,Complex&b)
{
   Complex temp;
   temp.real=a.real+b.real;
   temp.imaginary=a.imaginary+b.imaginary;
   temp.print();
}
void operator-(Complex&a,Complex&b)
{
   Complex temp;
   temp.real=a.real-b.real;
   temp.imaginary=a.imaginary-b.imaginary;
   temp.print();
}
void operator*(Complex&a,Complex&b)
{
   // ac-bd iad+bc;
   Complex temp;
   temp.real=(a.real*b.real)-(a.imaginary*b.imaginary);
   temp.imaginary=(a.real*b.imaginary)+(a.imaginary*b.real);
   temp.print();
}
void operator/(Complex&a,Complex&b)
{
   Complex temp;
   temp.real=;
   temp.imaginary=;
   temp.print();
}*/

Complex Complex::Inverse()
{
   Complex k;
   double w=(real*real)+(imaginary*imaginary);
   k.real=real/w;
   k.imaginary=-imaginary/w;
   return k;
}
Complex Complex::operator+(Complex &c)
{
   Complex k;
   k.real=real+c.real;
   k.imaginary=imaginary+c.imaginary;
   return k;
   
   
}
Complex Complex::operator-(Complex &c)
{
   Complex k;
   k.real=real-c.real;
   k.imaginary=imaginary-c.imaginary;
   return k;
   
}
Complex Complex::operator*(Complex &c)
{
   Complex k;
   k.real=real-c.real;
   k.imaginary=imaginary-c.imaginary;
   return k;
}
Complex Complex::operator/(Complex &c)
{
   Complex k,j;
   j=c.Inverse();

   k.real=c.real-j.real;
   k.imaginary=c.imaginary-j.imaginary;
   return k;
}
Complex::Complex(Complex &c)
{

}
bool Complex::operator==(Complex &c)
{
   return(real==c.real)&&(imaginary==c.imaginary);
   
}
void Complex::Input(double a,double b)
{
   real=a;
   imaginary=b;
}
Complex::Complex(double a,double b):real(a),imaginary(b)
{

}
Complex::Complex()
{
   real=0;
   imaginary=0;
}
void Complex::print()
{
   if(imaginary>0)
      cout<<"Z="<<real<<"+"<<imaginary<<"i"<<endl;
   else if(imaginary<0)
      cout<<"Z="<<real<<imaginary<<"i"<<endl;
   else{
      cout<<"Z="<<real<<"+"<<imaginary<<"i"<<endl;

   }

}
Complex Complex::Conjugate()
{
   Complex c;
   c.real=real;
   if(imaginary>0)
      c.imaginary=(imaginary);
   else if(imaginary<=0)
      c.imaginary=-(imaginary);
   else{
      c.imaginary=imaginary;
   }
   return c;
}
void Complex::Conjugate(Complex &c)
{
   real=c.real;
   if(c.imaginary>=0)
      imaginary=c.imaginary;
   else if(c.imaginary<0)
      imaginary=-(c.imaginary);
}
bool Complex::is_conjugate(Complex c)
{
   return (real==c.real)&&(imaginary==-(c.imaginary));
}
void Inverse(Complex&c)
{
   Complex k;
   double w=(c.real*c.real)+(c.imaginary*c.imaginary);
   k.real=c.real/w;
   k.imaginary=-(c.imaginary)/w;
   k.print();
   
}
int main()
{
   Complex c1(3,-5),c2,c3;
   c2.Conjugate(c1);
   c2.print();
   //c3=c1/c2;
   Inverse(c1);
   
   //cout<<c2.is_conjugate(c1);
   return 0;
}