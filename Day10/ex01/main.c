void	ft_foreach(int *tab, int length, void(*f)(int));

int	main(void)
{
	int tab[3] = {4,6,9};
	ft_foreach(tab, 3, &ft_putnbr);
}