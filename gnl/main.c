#include "get_next_line.h"

int		main(int ac, char **av)
{
	int		fd;
	char	*line;

	if (ac > 2)
	{
		ft_putstr("WARNING : Either read a File or pipe a text into test_gnl");
		return (0);
	}
	else if (ac == 1)
		fd = 0;
	else if (ac == 2)
		fd = open(av[1], O_RDONLY);
	else
		return (2);
	while (get_next_line(fd, &line))
	{
		ft_putendl(line);
		free(line);
	}
	free(line);
	if (ac == 2)
		close(fd);
}
