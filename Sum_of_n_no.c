#include<stdio.h>
int main(){
    
    //Take input from the user

    int n,sum=0;
    printf("Enter the number upto which you need to find out the sum: ");
    scanf("%d",&n);

    //Loop to find the sum

    for(int i=1 ; i<=n ; i++)
    {
        sum=sum+i;
    }

    //Print the sum
    printf("The sum is %d", sum);
    return 0;
}