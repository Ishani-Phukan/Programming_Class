#include <stdio.h>


int main() {
    // Program to print whether a number is Armstrong or not
  int num, digit,temp,sum=0;

  printf("Enter an integer: ");
  scanf("%d", &num);

    temp=num;
  while (temp > 0) {
    digit = temp % 10;
    sum=sum+(digit*digit*digit);
    temp /= 10;
  }
  if(sum==num){
    printf("%d is an Armstrong Number", num);
  }

  else{
    printf("%d is not an Armstrong Number", num);
  }

  printf("\n");

  return 0;
}