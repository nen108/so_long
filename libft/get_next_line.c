#include "get_next_line.h"

char    *get_next_line(int fd)
{
int len;
int i;
int tmp;
char    *arr;
char    buf;

arr = "";
len = 0;
i = 0;
tmp = 1;
while (tmp > 0)
{
tmp = read(fd, &buf, 1);
if (tmp < 0 || tmp == 0)
break ;
arr = ft_arrdup(arr, len++);
arr[i++] = buf;
if (buf == '\n')
break ;
}
if (tmp < 0 || (tmp == 0 && len == 0))
return (0);
arr[i] = '\0';
return (arr);
}