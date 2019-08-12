int	*ft_map(int *tab, int length, int(*f)(int));
void	ft_putnbr(int nb);

int	ft_add_1(int i)
{
	return ++i;
}

int	main(void)
{
	int tab[3] = {4,6,9};
	int *res;
	res = ft_map(tab, 3, &ft_add_1);
	
	int i = 0;
	while (i<3) 
	{
		ft_putnbr(res[i]);
		i++;
	}
}