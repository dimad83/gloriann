int ft_iterative_factorial(int nb)
{
	int i;
	int res;
	
	if (nb < 0 || nb > 13)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		i = 1;
		res = 1;
		while (i <= nb)
			res *= i++;
		return (res);
	}
}