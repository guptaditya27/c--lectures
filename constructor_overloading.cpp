#include<iostream>
using namespace std;
class Complex
{
  
    private:
        int a,b; 
    public:
        void setdata(int,int);
        void showdata();
        Complex add(Complex);
        Complex sub(Complex,Complex);
        void multiply(Complex,Complex);
        Complex()// constructor of complex class.
        {
            cout<<"Hello"<<endl;
        }
        ~Complex(){}//destructor




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
   
    Complex c1,c2,c3,c4,c5;
    c1.setdata(3,4);
    c1.showdata();
    c2.setdata(5,6);
    c2.showdata();
    c3=c1.add(c2);/* c1 is caller object jisne apne add mtd ko call kiya usme c2 as an argument
    pass huaa and jo add ne return kiya woh c3 mein store huya */
    c3.showdata();
    //cout<<endl;
    c4=c1.sub(c1,c2);
    c4.showdata();
    c5.multiply(c1,c2);
    c5.showdata();
    
    
    
    
    
    return 0;
}