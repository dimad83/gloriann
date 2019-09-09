int ft_sqrt(int nb)
{
	long low;
	long high;
	long mid;
	long n;
	
	n = nb;
	low = 0;
	high = n + 1;
	while (high - low > 1)
	{
		mid = (high + low) / 2;
		if (mid * mid < n)
			low = mid;
		else if (mid * mid == n)
			return (mid);
		else
			high = mid;		
	}
	return (0);	
}