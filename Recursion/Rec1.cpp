#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void insert_stack(){
    
}
void insert(vector<int>&v,int temp){
    if(v.size()==0||v[v.size()-1]<=temp){
        v.push_back(temp);
        return;
    }
    int val=v[v.size()-1];
    v.pop_back();
    insert(v,temp);
    v.push_back(val);
}
void f1(int x){
    if(x){
         // Print the current value of xcout<<x<<endl;
        f1(x-1); 
        cout<<x<<endl;
    }
    
}
int i=0;
void print(){
    if(i==5)
        return;
    else{
        
        cout<<"Aditya"<<endl;
        i++;
        print();

    }
}
void f3(int N){
    if(N<=0){
        cout<<N<<endl;
        return;
    }
    else{
        f3(N-1);
        cout<<N<<endl;
    }
}
void f4(int i,int n){
    if(i>=n){
        return;
    }
    cout<<"Aditya"<<endl;
    f4(i+1,n);

}
void f5(int i,int n){
    if(i>n)
        return;
    cout<<i<<endl;
    f5(i+1,n);
}
int sum(int i,int n){
    if(n==0)
        return i;
    sum(i+n,n-1);
}
int sum_n(int n){
    if(n==1)
        return 1;
    return n+sum_n(n-1);
}
void swap_rec(int a[],int l,int r){
    if(l>=r)
        return;
    int k=a[l];
    a[l]=a[r];
    a[r]=k;
    swap_rec(a,l+1,r-1);
}
void swap(int a[],int size,int i){
    if(i<=(size/2)){
        int k=a[i];
        a[i]=a[size-i-1];
        a[size-i-1]=k;
        swap(a,size,i+1);
    }
    else{
        return;
    }
}
bool is_palindrome(string a,int size,int i){
    if(i>=(size/2))
        return true;
    if(a[i]!=a[size-i-1])
        return false;
    return is_palindrome(a,size,i+1);
}
int fib(int n){
    if(n<=1)
        return n;
    return fib(n-1)+fib(n-2);
}
void print_subseq(int a[],int size,int ind,vector<int>v){

}
void sort_stack(){

}
void print(int n){
    if(n==1){
        cout<<1<<" ";
        return;
    }
    print(n-1);
    cout<<n<<" ";
}
void sort_array(vector<int>&arr,int n){
    if(arr.size()==0)
        return;
    int temp=arr[n-1];
    arr.pop_back();
    sort_array(arr,n-1);
    insert(arr,temp);

}
int main()
{
   f1(5);
   cout<<"End of recursion"<<endl;
   print();

   f3(5);
   f5(1,5);
   cout<<"sum of first 3 nat no:- "<<sum(0,3)<<endl;
   // The function f1 will print numbers from 5 to 1, then return to main.
   // The recursion will end when x becomes 0, at which point it will not print anything further.
   // The final output will be "End of recursion".
   int a[6]={10,11,12,13,14,15};
   swap(a,6,0);
   int i=0;
   while(i<=5){
    cout<<a[i]<<" ";
    i++;
   }
   cout<<endl;
   string s="madkam";
   cout<<"is_ palindrome "<<s<<endl<<is_palindrome(s,5,0)<<endl;
   cout<<"fibonacci of t10 :- "<<fib(10)<<endl;

   print(10);

   vector<int>v={2,3,7,6,4,5,9};
   sort_array(v,v.size());
   for(auto X:v)
    cout<<X<<" ";
   cout<<endl<<"Array sorted ";
    return 0;
}