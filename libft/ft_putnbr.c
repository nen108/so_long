#include "ft_printf.h"

int ft_putnbr(int nb)
{
int count;

count = 0;
if (nb == -2147483648)
{
return (write(1, "-2147483648", 11));
}
if (nb < 0)
{
count += ft_putchar('-');
nb = -nb;
}
if (nb > 9)
{
count += ft_putnbr(nb / 10);
}
count += ft_putchar(nb % 10 + 48);
return (count);
}