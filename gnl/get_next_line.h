#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 10

# include <fcntl.h>
# include <sys/types.h>
//# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

typedef struct		s_content
{
	char			*remains;
	size_t			fd;
}					t_content;

int		get_next_line(const int fd, char **line);

#endif
