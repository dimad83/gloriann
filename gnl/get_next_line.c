#include "get_next_line.h"

void    ft_die(char *msg)
{
	ft_putstr_fd("Error: ", 2);
	ft_putendl_fd(msg, 2);
	return(-1);
}

int		get_next_line(const int fd, char **line)
{
	static char	*s;
	char	buf[BUFF_SIZE];

	//buf = ft_strnew(BUFF_SIZE);
	if (fd == NULL)
		ft_die("No pointer to a file.");
	readed_size = read(fd, buf, BUFF_SIZE);
	if (readed_chars < 0)
		ft_die();

}
