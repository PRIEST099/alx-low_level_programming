#include<stdio.h>
/**
 * main - printing lowercase alphabets and a new line
 * Return: Always0 (Success)
 */
int main(void)
{
int a;
for (a = 0; a < 10 ; a++)
{
putchar(a + '0');
}
putchar('\n');
return (0);
}
