#include<stdio.h>
int main(){
    int n1,n2,i=2;
    printf("Enter two numbers:\n ");
    scanf("%d %d",&n1,&n2);
    printf("The factors are:\n");
    while(n1%i==0 && n2%i==0){
        printf("%d \n", i);
        i++;
    }
    return 0;
}