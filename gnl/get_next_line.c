#include "get_next_line.h"

void    ft_errdie(char *msg)
{
	ft_putstr_fd("Error: ", 2);
	ft_putendl_fd(msg, 2);
	return(-1);
}

int		get_next_line(const int fd, char **line)
{
	static char	*remains;
	char	buf[BUFF_SIZE + 1];

	//buf = ft_strnew(BUFF_SIZE);
	if (fd == NULL)
		ft_errdie("No pointer to a file.");
	if (remains == NULL)
		remains = ft_strnew(0);
	while (1)
	{
		if (delimeter_ptr = ft_strchr(remains, '\n'))
		{
			*line = remains;
			*line[delimeter_ptr - res] = '\0';
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
			buf[readed_size] = '\0';
			remains_buf = ft_strjoin(remains, buf);
			free(remains);
			remains = remains_buf;
		}
}
