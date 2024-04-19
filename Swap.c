#include<stdio.h>
int main(){
    // Program to swap two numbers
    int temp,n1, n2;
    printf("Enter the numbers: ");
    scanf("%d %d",&n1,&n2);
        temp=n1;
        n1=n2;
        n2=temp;

     printf("The swapped numbers are %d and %d",n1,n2);

    return 0;
}