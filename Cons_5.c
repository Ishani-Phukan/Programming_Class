#include <stdio.h>

int main(){    

int num,count=0;


printf("Enter the number: ");

scanf("%d", &num);


/* iterating a loop to check for three consecutive 5s */

while (num > 0)

{

if (num % 10 == 5)

/* value of count increases by 1 when 5 is found */

count++;

else

/* value of count resets to 0 if 5 is not found */

count = 0;

/* loop is exited when 3 consecutive 5s are found */

if(count == 3)

break;

num /= 10;

}

if (count == 3)

printf("YES");

else

printf("NO");

return 0;

}