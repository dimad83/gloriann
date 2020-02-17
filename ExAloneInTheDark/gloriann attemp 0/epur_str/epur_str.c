#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_space(char c)
{
	return (c == '\t' || c == ' ');
}

void	ft_print_trimmed(char *s)
{
	size_t	last_letter_pos;
	size_t	i;
	int previous_is_space;

	i = 0;
	last_letter_pos = 0;
	while (s[i])
	{
		if (!ft_is_space(s[i]))
			last_letter_pos = i;
		i++;
	}
	i = 0;
	previous_is_space = 1;
	while (i <= last_letter_pos)
	{
		if (ft_is_space(s[i]))
		{
			if (!previous_is_space)
				ft_putchar(' ');
			previous_is_space = 1;
		}
		else
		{
			ft_putchar(s[i]);
			previous_is_space = 0;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_print_trimmed(argv[1]);
	ft_putchar('\n');
}
