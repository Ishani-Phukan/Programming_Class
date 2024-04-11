#include<stdio.h>
int main(){
    int i,j,rows;
    printf("Enter the number of rows:\n");
    scanf("%d", &rows);
    printf("Displaying the inverted left star pyramid:\n");
    for(i=0;i<rows;i++){
        for(j=rows;j>i;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}