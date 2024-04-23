#include<stdio.h>
int main(){
    int no,i=2;
    printf("Enter your no. ");
    scanf("%d", &no);
    if(no==2){
        printf("P");
    }
    while(i<=no && no!=2){
        if(no%i==0){
            printf("np");
            break;
        }
        else{
            printf("p");
            break;
        }
        i++;
    }
    return 0;
}