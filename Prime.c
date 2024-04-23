#include<stdio.h>
int main(){
    int no,i=2;
    printf("Enter your no. ");
    scanf("%d", &no);
    if(no==2){
        printf("2 is a Prime Number");
    }
    while(i<=no && no!=2){
        if(no%i==0){
            printf("%d is not a Prime Number", no);
            break;
        }
        else{
            printf("%d is a Prime Number",no);
            break;
        }
        i++;
    }
    return 0;
}