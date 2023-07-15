#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Positive anything is better than negative nothing'
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int x;
srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
/* Our own code will go here */
if (x > 5)
{
printf("last digit of %d id %d is  greater than 5\n", n, x);
}
else if (x == 0)
{
printf("last digit of %d id %d is 0\n", n, x);
}
else
{
printf("last digit of %d id %d less than 6 and not 0\n", n, x);
}
return (0);
}
