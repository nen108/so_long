#include "ft_printf.h"

static int ft_check_base(char *base, char c)
{
int num;
int i;

i = 0;
num = 0;
while (base[num])
if (base[num++] == c)
i++;
if (i >= 2)
return (0);
return (i);
}

static int ft_strprint(unsigned int num, char *base, unsigned int size)
{
int count;

count = 0;
if (num > size - 1)
{
count += ft_strprint(num / size, base, size);
num %= size;
}
ft_putchar(base[num]);
count++;
return (count);
}

int ft_putnbr_base(unsigned int nb, char *base)
{
int i;
int count;

i = -1;
count = 0;
while (base[++i])
if ((base[i] == '-' || base[i] == '+' || !ft_check_base(base, base[i])))
return (count);
if (i < 2)
return (count);
else
count += ft_strprint(nb, base, i);
return (count);
}