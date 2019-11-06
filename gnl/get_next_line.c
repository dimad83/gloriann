#include "get_next_line.h"

void    ft_puterror(char *msg)
{
	ft_putstr_fd("Error: ", 2);
	ft_putendl_fd(msg, 2);
}

int		get_next_line_single(const int fd, char **line)
{
	static char	*remains;
	char		buf[BUFF_SIZE + 1];
	char		*delimeter_ptr;
	int			readed_size;

	if (line == NULL || fd < 0)
		return (-1); //error
	readed_size = -1;
	if (remains == NULL)
		remains = ft_strnew(0);
	while (1)
	{
		delimeter_ptr = ft_strchr(remains, '\n');
		if (delimeter_ptr != NULL)
		{
			*line = ft_strsub(remains, 0, delimeter_ptr - remains);
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

int		get_next_line(const int fd, char **line)
{
	static char	*remains[ARR_SIZE];
	char		buf[BUFF_SIZE + 1];
	char		*delimiter_ptr;
	int			read_size;

	if (line == NULL || fd < 0)
		return (-1); //error
	read_size = -1;
	if (remains[fd] == NULL)
		remains[fd] = ft_strnew(0);
	while (1)
	{
		delimiter_ptr = ft_strchr(remains[fd], '\n');
		if (delimiter_ptr != NULL)
		{
			ft_putendl("Delimiter was found, preparing to return...");
			*line = ft_strsub(remains[fd], 0, delimiter_ptr - remains[fd]);
			remains[fd] = delimiter_ptr + 1;
			return (1);//a line has been read
		}
		else if (read_size == 0)
		{
			ft_putendl("Read size is 0, preparing to return...");
			*line = ft_strdup(remains[fd]);
			ft_putendl("*line has a value");
			ft_strdel(&remains[fd]);
			ft_putendl("&remains[fd] was removed");
			return (0);//the reading has been completed
		}
		else
		{
			ft_putendl("Trying to read...");
			read_size = read(fd, buf, BUFF_SIZE);
			ft_putstr("Done, were read ");
			ft_putnbr(read_size);
			ft_putendl(" bytes");
			if (read_size == -1)
				return (-1);//error
			buf[read_size] = '\0';
			ft_putendl("Trying to join...");
			remains[fd] = ft_strjoin(remains[fd], buf);
			ft_putstr("Done. Result: ");
			ft_putnbr(&remains[fd]);
			ft_putstr(", ");
			ft_putendl(remains[fd]);
		}
	}
}