int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;
	int res;
	int order;
	int order_is_defined;
	
	i = 0;
	order_is_defined = 0;
	
	while (i < length - 1)
	{
		res = ((*f)(tab[i], tab[i + 1]));
		if (res > 0 || res < 0)
		{
			if (order_is_defined)
			{
				if (res != order)
				{
					return (0);
				}
			}
			else
			{
				order = res;
				order_is_defined = 1;
			}
		}		
		i++;
	}
	return (1);
	
}