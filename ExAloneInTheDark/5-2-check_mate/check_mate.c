#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putstr(char *s)
{
	while (*s)
		ft_putchar(*s++);
}

int pawn_can_capture(int size, char **field, int cur_y, int cur_x)
{
	if (cur_y > 0)
	{
		if (cur_x - 1 >= 0 && field[cur_y - 1][cur_x - 1] == 'K')
			return (1);
		if (cur_x + 1 < size && field[cur_y - 1][cur_x + 1] == 'K')
			return (1);
	}
	return (0);
}

int bishop_can_capture(int size, char **field, int cur_y, int cur_x)
{
	return (0);
}

int rook_can_capture(int size, char **field, int cur_y, int cur_x)
{
	return (0);
}

int queen_can_capture(int size, char **field, int cur_y, int cur_x)
{
	return (bishop_can_capture(size, field, cur_y, cur_x) || rook_can_capture(size, field, cur_y, cur_x));
}

int can_capture(int argc, char **argv)
{
	int i, j, size;
	char **field;

	field = malloc(sizeof(char *) * (argc - 1));
	i = 1;
	while (i < argc)
	{
		field[i - 1] = malloc(sizeof(char) * (argc - 1));
		j = 0;
		while (j < argc - 1)
		{
			field[i - 1][j] = argv[i][j];
			j++;
		}
		i++;
	}

	i = 0;
	size = argc - 1;

	while (i < size)
	{
		j = 0;
		while (j < size)
			ft_putchar(field[i][j++]);
		i++;
		ft_putchar('\n');
	}

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if ((field[i][j] == 'P' && pawn_can_capture(size, field, i, j))
				|| (field[i][j] == 'B' && bishop_can_capture(size, field, i, j))
				|| (field[i][j] == 'R' && rook_can_capture(size, field, i, j))
				|| (field[i][j] == 'Q' && queen_can_capture(size, field, i, j)))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int i;
	//char **field;

	i = 1;

	if (argc > 1)
	{
		while (i < argc)
		{
			if (ft_strlen(argv[i]) != argc - 1)
			{
				ft_putstr("Fail\n");
				return (0);
			}
			i++;
		}
		ft_putstr(can_capture(argc, argv) ? "Success\n" : "Fail\n");
	}
	else if (argc == 1)
		ft_putstr("\n");
	else
		ft_putstr("Fail\n");
	return (0);
}