#include<stdio.h>
int main(){
    int i,j,rows;
    printf("Enter the number of rows:\n");
    scanf("%d", &rows);
    printf("Displaying the left Number pyramid:\n");
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}