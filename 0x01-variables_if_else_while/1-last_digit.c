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
int ld;
srand(time(0));
n = rand() - RAND_MAX / 2;

printf("%d \n", n);

/* Our own code will go here */
if (ld > 0)
{
printf("last digit of %d id %d is  greater than 5", n, ld);
}
else if (ld == 0)
{
printf("last digit of %d id %d is 0", n, ld);
}
else
{
printf("last digit of %d id %d less than 6 and not 0", n, ld);
}
return (0);
}
