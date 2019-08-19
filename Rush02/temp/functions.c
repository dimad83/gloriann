#include "list.h"

char	rush00(int x, int y, int height, int width)
{
	char *p;

	p = "o-o| |o-o";
	if (x < 0 || y < 0 || height <= 0 || width <= 0)
		return ('\0');
	if (y == 0 && x == 0)
		return (p[0]);
	else if (y == 0 && x < width - 1)
		return (p[1]);
	else if (y == 0)
		return (p[2]);
	else if (y < height - 1 && x == 0)
		return (p[3]);
	else if (y < height - 1 && x < width - 1)
		return (p[4]);
	else if (y < height - 1)
		return (p[5]);
	else if (y == height - 1 && x == 0)
		return (p[6]);
	else if (y == height - 1 && x < width - 1)
		return (p[7]);
	else
		return (p[8]);
}

char	rush01(int x, int y, int height, int width)
{
	char *p;

	p = "/*\\* *\\*/";
	if (x < 0 || y < 0 || height <= 0 || width <= 0)
		return ('\0');
	if (y == 0 && x == 0)
		return (p[0]);
	else if (y == 0 && x < width - 1)
		return (p[1]);
	else if (y == 0)
		return (p[2]);
	else if (y < height - 1 && x == 0)
		return (p[3]);
	else if (y < height - 1 && x < width - 1)
		return (p[4]);
	else if (y < height - 1)
		return (p[5]);
	else if (y == height - 1 && x == 0)
		return (p[6]);
	else if (y == height - 1 && x < width - 1)
		return (p[7]);
	else
		return (p[8]);
}

char	rush02(int x, int y, int height, int width)
{
	char *p;

	p = "ABAB BCBC";
	if (x < 0 || y < 0 || height <= 0 || width <= 0)
		return ('\0');
	if (y == 0 && x == 0)
		return (p[0]);
	else if (y == 0 && x < width - 1)
		return (p[1]);
	else if (y == 0)
		return (p[2]);
	else if (y < height - 1 && x == 0)
		return (p[3]);
	else if (y < height - 1 && x < width - 1)
		return (p[4]);
	else if (y < height - 1)
		return (p[5]);
	else if (y == height - 1 && x == 0)
		return (p[6]);
	else if (y == height - 1 && x < width - 1)
		return (p[7]);
	else
		return (p[8]);
}

char	rush03(int x, int y, int height, int width)
{
	char *p;

	p = "ABCB BABC";
	if (x < 0 || y < 0 || height <= 0 || width <= 0)
		return ('\0');
	if (y == 0 && x == 0)
		return (p[0]);
	else if (y == 0 && x < width - 1)
		return (p[1]);
	else if (y == 0)
		return (p[2]);
	else if (y < height - 1 && x == 0)
		return (p[3]);
	else if (y < height - 1 && x < width - 1)
		return (p[4]);
	else if (y < height - 1)
		return (p[5]);
	else if (y == height - 1 && x == 0)
		return (p[6]);
	else if (y == height - 1 && x < width - 1)
		return (p[7]);
	else
		return (p[8]);
}

char	rush04(int x, int y, int height, int width)
{
	char *p;

	p = "ABCB BCBA";
	if (x < 0 || y < 0 || height <= 0 || width <= 0)
		return ('\0');
	if (y == 0 && x == 0)
		return (p[0]);
	else if (y == 0 && x < width - 1)
		return (p[1]);
	else if (y == 0)
		return (p[2]);
	else if (y < height - 1 && x == 0)
		return (p[3]);
	else if (y < height - 1 && x < width - 1)
		return (p[4]);
	else if (y < height - 1)
		return (p[5]);
	else if (y == height - 1 && x == 0)
		return (p[6]);
	else if (y == height - 1 && x < width - 1)
		return (p[7]);
	else
		return (p[8]);
}

void	print_rush(int width, int height, int rush)
{
	int x;
	int y;
	char c;

	if (height <= 0 || width <= 0 || rush < 0 || rush > 4)
		return ;
	y = 0;
	while (y < height)
	{
		x = 0;
		while(x < width)
		{
			if (rush == 0)
			   c = rush00(x, y, height, width);
			else if (rush == 1)
			   c = rush01(x, y, height, width);
			else if (rush == 2)
			   c = rush02(x, y, height, width);
			else if (rush == 3)
			   c = rush03(x, y, height, width);
			else if (rush == 4)
			   c = rush04(x, y, height, width);
			ft_putchar(c);
			x++;
		}
		y++;
		ft_putchar('\n');
	}
}

void put_result(t_pattern rush)
{
	int i;
	int rushes_found;
	int add_prefix;

	i = 0;
	rushes_found = 0;
	add_prefix = 0;
	while (i < 5)
	{
		if (rush.tab[i])
			rushes_found++;
		i++;
	}
	i = 0;
	while (i < 5)
	{
		if (rush.tab[i])
		{
			if (add_prefix)
				ft_putstr(" || ");
			if (rushes_found > 1)
				ft_putstr("[colle-0");
			else
				ft_putstr("[rush-0");
			ft_putnbr(i);
			ft_putstr("] [");
			ft_putnbr(rush.column);
			ft_putstr("] [");
			ft_putnbr(rush.row);
			ft_putstr("]");
			add_prefix = 1;
		}
		i++;
	}
	if (rushes_found < 1)
		ft_putstr("aucune");
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int width;
	int height;
	int rush;

	if (argc == 4)
	{
		rush = ft_atoi(argv[1]);
		width = ft_atoi(argv[2]);
		height = ft_atoi(argv[3]);
		print_rush(width, height, rush);
		return (0);
	}
}
