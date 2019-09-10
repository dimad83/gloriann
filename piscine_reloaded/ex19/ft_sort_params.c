void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;		
	}
	return (*s1 - *s2);
}

int	main(int argc, char **argv)
{
	int i;
	int j;
	char *buf;
	
	i = 1;	
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				buf = argv[i];
				argv[i] = argv[j];
				argv[j] = buf;				
			}
			j++;
		}
		i++;
		
	}
	i = 1;	
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
	return (0);
}