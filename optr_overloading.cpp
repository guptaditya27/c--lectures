#include<iostream>
using namespace std;
class item
{
    private:
        int a,b;
    
    public:
        void setdata(int x,int y) {a=x;b=y;}
        //item operator -();
        friend item operator+(item,item);//friend operator
        friend void f1(item);// declaration of friend function.
        void showdata()
        {
            cout<<a<<" "<<b<<endl;
        }
        friend item operator-(item);
        friend item operator +(int,item);
        friend item operator +(item,int);

        friend istream& operator>>(istream&,item&);
        friend ostream& operator<<(ostream&,item);

        

};
item operator +(int k,item c)
{
    item temp;
    temp.a=c.a+k;
    temp.b=c.b;
    return temp;
}
item operator +(item c,int k)
{
    item temp;
    temp.a=c.a+k;
    temp.b=c.b;
    return temp;
}
/*item item::operator -()
{
    item temp;
    temp.a=-a;
    temp.b=-b;
    return temp;
}*/ //as a member func overloading of unary - 
// unary overloading as friend
item operator -(item c)
{
    item temp ;
    temp.a=-c.a;
    temp.b=-c.b;
    return temp;
}
        
void f1(item i)
{
    /*item t1;
    t1.setdata(10,20);
    int c=t1.a+t1.b;
    cout<<"sum is "<<c;*/
    
    
    /*int c=i.a+i.b;
    cout<<"sum is "<<c;*/ //another mtd for friend fn call by object.


}
item operator +(item c,item d)
{   
    item temp;
    temp.a=d.a+c.a;
    temp.b=d.b+c.b;

    return temp;
}


istream& operator >>(istream&din,item&i)
{
    din>>i.a>>i.b;
    return din;
}
ostream& operator<<(ostream&dout,item i)
{
    dout<<i.a<<" "<<i.b;
    return dout;
}



int main()
{
    item i1,i2,i3;
    
    cout<<"Enter an object data";
    cin>>i1;
    //i1.showdata();
    cout<<i1;
    
    
    /*i1.setdata(3,5);
    i2.setdata(9,4);
    i3=i1+i2;
    i3=-i2;
    i3=5+i1;//i3=i1+5 both are valid now 
    i3.showdata();

    f1(i1);

    cout<<endl;*/
    
    
    return 0;
}