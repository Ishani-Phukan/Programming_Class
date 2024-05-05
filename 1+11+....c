#include<stdio.h>
int main(){
    int n,sum=0, count=1, i=1, total=0;
    printf("Enter n: ");
    scanf("%d",&n);
    
    while(count<=n){
        sum=sum+i;
        i=i*10;
        printf("The sum is %d\n",sum);
        count++;
        total=total+sum;
        printf("%d", total);
    }
    

    return 0;
}