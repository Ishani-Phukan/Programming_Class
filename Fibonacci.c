#include<stdio.h>
int main(){
    int n,fib,i=0,j=1,count=0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("%d %d ",i,j);
    while(count!=n-2){
    fib=i+j;
    printf("%d ",fib);
    i=j;
    j=fib;
    count++;
    }
    return 0;
}