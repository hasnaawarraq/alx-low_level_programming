#include <stdlib.h>
#include <time.h>
/*main code n if positive or negative or zero  */

/* Return always 0 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n==0)
{
printf("number n is zero\n",n);
}
else if (n>0)
{
printf("number n is positive \n",n);
}
else if(n<0)
{
printf("number n is negative \n",n);
}
return (0);
}
