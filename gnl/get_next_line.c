#include "get_next_line.h"

void	remains_add_buf(char **remains, const int fd, char *buf, int read_size)
{
	char *tmp;

	buf[read_size] = '\0';
	tmp = ft_strjoin(remains[fd], buf);
	free(remains[fd]);
	remains[fd] = tmp;
}

int		result_on_end(char **remains, const int fd, char **line)
{
	if (ft_strlen(remains[fd]) == 0)
	{
		ft_strdel(&remains[fd]);
		*line = "";
		return (STATUS_COMPLETED);
	}
	*line = ft_strdup(remains[fd]);
	remains[fd][0] = '\0';
	return (STATUS_READ);
}

int 	get_before_n(char **remains, const int fd, char **line)
{
	char		*n_ptr;

	if ((n_ptr = ft_strchr(remains[fd], '\n')) == NULL)
	{
		return (get_next_line(fd, line));
	}
	else
	{
		*line = ft_strsub(remains[fd], 0, n_ptr - remains[fd]);
		ft_strlcpy(remains[fd], n_ptr + 1, ft_strlen(n_ptr)); // cut the *line from the beginning of remains, the address of remains isn't changed
		return (STATUS_READ);
	}
}

int		get_next_line(const int fd, char **line)
{
	static char *remains[ARR_SIZE];
	char buf[BUFF_SIZE + 1];
	int read_size;

	if (line == NULL || fd < 0)
		return (STATUS_ERROR);
	if (remains[fd] == NULL)
		remains[fd] = ft_strnew(0);
	if (ft_strchr(remains[fd], '\n') == NULL)
	{
		if ((read_size = read(fd, buf, BUFF_SIZE)) == -1)
			return (STATUS_ERROR);
		if (read_size == 0)
			return (result_on_end(remains, fd, line));
		else
		{
			remains_add_buf(remains, fd, buf, read_size);
			return (get_before_n(remains, fd, line));
		}
	}
	else
		return (get_before_n(remains, fd, line));
}
