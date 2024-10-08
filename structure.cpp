#include<iostream>
#include<string.h>
using namespace std;
struct book
{
    private:
        int bookid;
        char title[20];
        float price;
    public:



    void dispalybook()
    {
        cout<<bookid<<" "<<title<<" "<<price<<endl;
    }
    void inputbook()
    {
        
        printf("Enter Bookd , title, price :- ");
        cin>>bookid;
        fflush(stdin);
        fgets(title,20,stdin);
        title[strlen(title)-1]='\0';
        cin>>price;

    }
};
//struct book inputbook();
//void displaybook(book);
int main()
{
    
    struct book b2,b3;
    b2.inputbook();

    b3.inputbook();
    b2.dispalybook();
    b3.dispalybook();



    return 0;
    
}



