#include<stdio.h>
/**
 * main - printing lowercase alphabets and a new line
 * Return:Always0 (Success)
 */
int main(void)
{
char l;
l = 'z';
while (l >= 'a')
{
putchar(l);
l--;
}

putchar('\n');
return (0);
}
