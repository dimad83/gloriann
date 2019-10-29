#include "get_next_line.h"

void    ft_puterror(char *msg)
{
	ft_putstr_fd("Error: ", 2);
	ft_putendl_fd(msg, 2);
}

int		get_next_line(const int fd, char **line)
{
	static char	*remains;
	char		buf[BUFF_SIZE + 1];
	char		*delimeter_ptr;
	int			readed_size;

	readed_size = -1;
	if (remains == NULL)
		remains = ft_strnew(0);
	while (1)
	{
		delimeter_ptr = ft_strchr(remains, '\n');
		if (delimeter_ptr != NULL)
		{
			*line = ft_strndup(remains, delimeter_ptr - remains);
			remains = delimeter_ptr + 1;
			return (1);//a line has been read
		}
		else if (readed_size == 0)
		{
			*line = remains;
			remains = NULL;
			return (0);//the reading has been completed
		}
		else
		{
			readed_size = read(fd, buf, BUFF_SIZE);
			if (readed_size == -1)
				return (-1);//error
			buf[readed_size] = '\0';
			remains = ft_strjoin(remains, buf);
		}
	}
}
