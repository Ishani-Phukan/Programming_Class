#include<stdio.h>
int main(){
    int n,digit,count=0;
    printf("Enter no");
    scanf("%d",&n);
    while(n>0){
        digit=n%10;
        if(digit==5){
            count++;
        }
        else{
            count=0;
        }
        if(count==3){
            printf("Yes");
            break;
        }
       
        n/=10;
    }
    if(count!=3){
        printf("No");
    }
    return 0;
}