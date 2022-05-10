#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# define BUFF_SIZE 4096

char    *get_next_line(int fd);
char    *ft_arrdup(char *line, int len);

#endif