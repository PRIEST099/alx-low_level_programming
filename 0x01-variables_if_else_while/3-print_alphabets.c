#include<stdio.h>
/**
 * main - printing lowercase alphabets and a new line
 * Return:Always0 (Success)
 */
int main(void)
{
char l, u;
l = 'a';
u = 'A';
while (l <= 'z')
{
putchar(l);
l++;
}
while (u <= 'Z')
{
putchar(u);
u++;
}
putchar('\n');
return (0);
}
