#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int 	res;

	if (argc > 2)
	{
		ft_putstr("WARNING : Either read a File or pipe a text into test_gnl");
		return (0);
	}
	else if (argc == 1)
		fd = 0;
	else if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	else
		return (2);
	while ((res = get_next_line(fd, &line)) != -1)
	{
		ft_putendl(line);
		ft_putendl("line was printed");
		free(line);
		ft_putendl("line was freed");
		if (res == 0) // конец
			break;
	}
	//free(line);
	ft_putendl("line was freed again");
	if (argc == 2)
	{
		ft_putendl("closing fd...");
		close(fd);
		ft_putendl("done");
	}
}
