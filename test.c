// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    //ARRAY Assignment!!
    int arr[10];
    int sum=0;
    int sum_even=0,sum_odd=0;
    for(int i=0;i<10;i++)
    {
        printf("Enter %d value of Array:- ",i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
        arr[i]%2==0?sum_even+=arr[i]:sum_odd=sum_odd+arr[i];
    }
    printf("\nsum of all Elemnts is %d ",sum);
    printf("\n Averege of Array :- %.2f",(float)sum/10);
    printf("\n Sum of Even Elemnts is :- %d",sum_even);
    printf("\n sum of odd  Elements ius:- ",sum_odd);
    
    

    return 0;
}