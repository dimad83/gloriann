#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_is_space(char c)
{
	return (c == '\t' || c == ' ');
}

void	print_token(int start, int end, char *s)
{
	int i;

	i = start;
	while (i <= end)
		ft_putchar(s[i++]);
}

void	rev_wstr(char *s)
{
	int	len;
	int	i;
	int sot;
	int eot;
	int is_space_token;

	len = 0;
	while (s[len])
		len++;
	i = len - 1;
	//token_index = 0;
	is_space_token = 0;
	eot = len - 1; // end of token
	sot = len - 1; // start of token
	while (i >= 0)
	{
		if (ft_is_space(s[i]))
		{
			if (is_space_token)
			{
				sot = i;
			}
			else 
			{
				print_token(sot, eot, s);
				sot = i;
				eot = i;
			}
			is_space_token = 1;
		}
		else
		{
			if (is_space_token)
			{
				print_token(sot, eot, s);
				sot = i;
				eot = i;
			}
			else
			{
				sot = i;
			}
			is_space_token = 0;
		}
		i--;
	}
	print_token(sot, eot, s);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1]);
	ft_putchar('\n');
}
