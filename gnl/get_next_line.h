#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 2
# define ARR_SIZE 255
# define STATUS_READ 1
# define STATUS_COMPLETED 0
# define STATUS_ERROR -1

# include <fcntl.h>
# include <sys/types.h>
//# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

int		get_next_line(const int fd, char **line);

#endif
