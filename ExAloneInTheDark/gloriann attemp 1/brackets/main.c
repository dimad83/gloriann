#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *s)
{
	while (*s)
		ft_putchar(*s++);
}

int is_opening_bracket(char c)
{
	return (c == '(' || c == '[' || c == '{' ? 1 : 0);
}

int is_closing_bracket(char c)
{
	return (c == ')' || c == ']' || c == '}' ? 1 : 0);
}

int is_closed(char *s, int start, char c, int *end)
{
	int i;

	i = start;
	while (s[i])
	{
		if (is_opening_bracket(s[i]))
		{
			if (is_closed(s, i + 1, s[i], &i))
				continue;
			else
				return (0);
		}
		if (is_closing_bracket(s[i]))
		{
			if ((c == '(' && s[i] == ')') || (c == '[' && s[i] == ']') || (c == '{' && s[i] == '}'))
			{
				*end = i + 1;
				return (1);
			}
			else
				return (0);
		}
		i++;
	}
	return (1);
}

void check_brackets(char *s)
{
	int end;
	if (is_closed(s, 0, ' ', &end))
		ft_putstr("OK\n");
	else
		ft_putstr("Error\n");
}

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
		while (i < argc)
		{
			check_brackets(argv[i]);
			//ft_putstr(argv[i]);
			//ft_putchar('\n');
			i++;
		}
	else
		ft_putchar('\n');
}
