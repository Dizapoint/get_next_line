#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# include "fcntl.h"

# define BUFF_SIZE 32
# define FD_NUM 20000
# define ERROR -1
# define OK 1

int		get_next_line(const int fd, char **line);

#endif
