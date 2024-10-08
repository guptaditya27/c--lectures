#include<iostream>
using namespace std;
class Complex
{
  
    private:
        int a,b;
        const int k; 
    public:
        void setdata(int,int);
        void showdata();
        Complex add(Complex);
        Complex sub(Complex,Complex);
        void multiply(Complex,Complex);
        Complex():a(0),b(0),k(3)// constructor of complex class.
        {}
        Complex(int a,int b):a(a),b(b),k(3)// Name resolving conflict.
        {}
        Complex(int x):a(x),b(0),k(3)// providing initialization list to constructor
        {}
        ~Complex(){}//destructor
    /* only way to initialize const variable using initialization list in 
    constructor. and necessary to initialize value in each constructor*/



};

void Complex::setdata(int x,int y)
{
    a=x;
    b=y;
}
void Complex::showdata()
{
    cout<<a<<" "<<"+"<<b<<"i"<<endl;
}

Complex Complex::add(Complex c)
{
  Complex temp;// this is resulting call to constructor.
  temp.a=a+c.a;
  temp.b=b+c.b;
  return temp;
}
Complex Complex::sub(Complex x,Complex y)
{   
    Complex temp;//this is resulting call to constructor.
    temp.a=y.a-x.a;
    temp.b=y.b-x.b;
    return temp;
}
void Complex::multiply(Complex x,Complex y)
{
    a=(x.a*y.a-x.b*y.b);
    b=(x.a*y.b+x.b*y.a);
}





int main()
{
   
    Complex c1,c2;
    c1.setdata(3,4);
    c1.showdata();
    c2.setdata(5,6);
    c2.showdata();
    /*c3=c1.add(c2);/* c1 is caller object jisne apne add mtd ko call kiya usme c2 as an argument
    pass huaa and jo add ne return kiya woh c3 mein store huya */
    Complex c3(1,2);
    c3.showdata();
    //cout<<endl;
    //c4=c1.sub(c1,c2);
    Complex c4(1);
    c4.showdata();
    //c5.multiply(c1,c2);
    Complex c5;// initializers working perfectly fine...!!!
    c5.showdata();
    
    
    
    
    
    return 0;
}