#include <stdio.h>

/**
 * main - Entry point
 * Description:"Write a program that prints the alphabet in lowercase"
 * Return: Always 0 (Success)
 */

int main(void)
{
char i = 'a';
while (i <= 'z')
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
