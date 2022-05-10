#include "get_next_line.h"

char    *ft_arrdup(char *line, int len)
{
int i;
char    *new;

new = (char *)malloc(sizeof(*new) + (len + 2));
if (new == NULL)
return (0);
i = 0;
while (i < len)
{
new[i] = line[i];
i++;
}
new[i] = '\n';
new[i + 1] = '\0';
if (len > 0)
free(line);
return (new);
}