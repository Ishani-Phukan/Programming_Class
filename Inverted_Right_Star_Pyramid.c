#include<stdio.h>
int main(){
    int i,j,rows;
    printf("Enter the number of rows:\n");
    scanf("%d", &rows);
    printf("Displaying the Inverted Right Star Pyramid:\n");
    for(i=0;i<rows;i++){
        for(j=rows;j>rows-i;j--){
            printf(" ");
        }
        for(j=rows;i<j;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}