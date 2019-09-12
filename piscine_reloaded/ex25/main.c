void	ft_foreach(int *tab, int length, void(*f)(int));
void	ft_putnbr(int n);

int		main(void)
{
	int tab[10] = {1, 4, 5, 79, -4};
	ft_foreach(tab, 5, &ft_putnbr);
}