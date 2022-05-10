#include "ft_printf.h"

int ft_check_flag(const char *format, va_list arg, int i, int count)
{
unsigned long long  ptr;

if (format[i] == 'p')
ptr = va_arg(arg, unsigned long long);
if (format[i] == 'c')
count += ft_putchar(va_arg(arg, int));
else if (format[i] == 's')
count += ft_putstr(va_arg(arg, char *));
else if (format[i] == 'p')
count += ft_put_memory(&ptr, "0123456789abcdef");
else if (format[i] == 'd' || format[i] == 'i')
count += ft_putnbr(va_arg(arg, int));
else if (format[i] == 'u')
count += ft_putunbr(va_arg(arg, int));
else if (format[i] == 'x')
count += ft_putnbr_base(va_arg(arg, int), "0123456789abcdef");
else if (format[i] == 'X')
count += ft_putnbr_base(va_arg(arg, int), "0123456789ABCDEF");
else if (format[i] == '%')
count += ft_putchar('%');
return (count);
}

int ft_printf(const char *format, ...)
{
va_list ap;
int i;
int count;

i = -1;
count = 0;
va_start(ap, format);
while (format[++i])
{
if (format[i] == '%')
count += ft_check_flag(format, ap, ++i, 0);
else
count += ft_putchar(format[i]);
}
va_end(ap);
return (count);
}