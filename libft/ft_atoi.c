#include "libft.h"

int ft_atoi(const char *str)
{
size_t  i;
long    res;
long    rev;
size_t  j;

i = 0;
res = 0;
rev = 1;
j = 0;
while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
i++;
while ((str[i] == '-' || str[i] == '+') && j == 0)
{
if (str[i++] == '-')
{
rev *= -1;
}
j++;
}
while (str[i] >= '0' && str[i] <= '9')
{
res = res * 10 + str[i++] - 48;
}
return (res * rev);
}