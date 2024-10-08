#include<iostream>
using namespace std;
class item
{
    private:
        int a,b;
    
    public:
        void setdata(int a,int b) 
        {
            this->a=a;
            this->b=b;
        }
        
        
        void showdata()
        {
            cout<<a<<" "<<b<<endl;
        }
        item greater(item obj)
        {
            
            if((a+b) >(obj.a+obj.b))
                return *this;
                
            else 
                return obj;
        }
        

        

};




int main()
{
    item i1,i2,i3;
    
    i1.setdata(10,20);
    i2.setdata(11,22);
    i3=i1.greater(i2);
    i3.showdata();
    
    
    
    return 0;
}