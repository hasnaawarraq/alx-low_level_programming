#include <stdio.h>
/**
 * main -I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 97;
int m = 65;
while (n <= 122)
{
putchar(n);
n++;
}
while (m <= 90)
{
putchar(m);
m++;
}
putchar('\n');
return (0);
}

