void	ft_putnbr(int nb);

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;
	
	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}