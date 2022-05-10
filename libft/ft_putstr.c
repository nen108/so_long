#include "ft_printf.h"

int ft_putstr(char *str)
{
int i;

i = 0;
if (str == NULL)
i += ft_putstr("(null)");
else
{
while (str[i])
{
ft_putchar(str[i]);
i++;
}
}
return (i);
}