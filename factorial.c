#include<stdio.h>
int main(){
    int no, fact=1, i=1;
    printf("Enter Your no. ");
    scanf("%d",&no);
    while(i<=no){
        fact=fact*i;
        i++;
    }
    printf("Factorial of %d is %d ",no,fact);
    return 0;
}