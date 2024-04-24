#include<stdio.h>
int main(){
    int price,qty,sum=0,total=sum;
    printf("Enter the price and quantity: \n ");
    scanf("%d %d",&price,&qty);
    sum=price*qty;
    if(total<0){
        printf("Wrong Input!");
    }
    else if(total<1000){
        printf("Your total is: %d", total-((5/100)*total));
    }
    else if(total>=1000 && total<5000){
        printf("Your total is: %d",total-((10/100)*total));
    }
    else{
        printf("Your total is: %d",total-((15/100)*total));
    }
    return 0;
}