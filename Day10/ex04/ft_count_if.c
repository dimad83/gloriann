int	ft_count_if(char **tab, int(*f)(char*))
{
	int i;
	int res;
	
	i = 0;
	res = 0;
	while (tab[i] !=0)
	{
		if (((*f)(tab[i]) == 1))
			res++;
		i++;
	}
	return (res);
	
}