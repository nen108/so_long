#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <sys/types.h>
# include <signal.h>
# include <unistd.h>
# include <stdlib.h>

# define WAIT_TIME 1000

int ft_printf(const char *str, ...);
int ft_putchar(char c);
int ft_putstr(char *str);
int ft_putnbr(int nbr);
int ft_atoi(const char *str);
int ft_putnbr_base(unsigned int nbr, char *base);
int ft_put_memory(unsigned long long *ptr, char *base);
unsigned int    ft_putunbr(unsigned int n);

#endif