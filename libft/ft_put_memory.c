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

static unsigned long long ft_strprint(unsigned long long num,
char *base, unsigned int size)
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

int ft_put_memory(unsigned long long *ptr, char *base)
{
int i;
int count;

count = 0;
i = -1;
while (base[++i])
if (base[i] == '-' || base[i] == '+' || !ft_check_base(base, base[i]))
return (count);
if (i < 2)
return (i);
count += ft_putstr("0x");
if ((long)ptr < 0)
ptr[0] = -ptr[0];
count += ft_strprint(ptr[0], base, i);
return (count);
}