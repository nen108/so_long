#include "ft_printf.h"

unsigned int ft_putunbr(unsigned int nb)
{
int count;

count = 0;
if (nb > 9)
{
count += ft_putunbr(nb / 10);
}
count += ft_putchar(nb % 10 + 48);
return (count);
}
