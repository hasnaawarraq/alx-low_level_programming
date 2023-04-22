#include <stdio.h>
/**
 * main -I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha[26] ="abcdefghijklmnopqrstuvwxyz";
int i ;
for (i = 0; i < 26 ; i++)
{
putchar(alpha[i]);
}
putchar("\n");
return (0);
}
