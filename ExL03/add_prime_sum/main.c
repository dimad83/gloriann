#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *s)
{
	int sign;
	int res;
	
	res = 0;
	while (*s == ' ' || *s == '\f' || *s == '\n' || *s == '\t' || *s == '\v' || *s == '\r')
	{
		s++;
	}
	sign = 1;
	if (*s == '-')
	{
		sign = -1;
	}
	while ('0' <= *s && *s <= '9')
	{
		res = res * 10 + *s - '0';
		s++;
	}
	return (res * sign);
	
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

int ft_is_prime(int nb)
{
	int i;
	
	i = 2;
	while (i < nb / 2 + 1)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
	
}

int main(int argc, char **argv)
{
	int nb;
	
	if (argc == 2 && (nb = ft_atoi(argv[1])) > 0)
	{
		printf("%d", ft_is_prime(nb));
		//ft_putnbr(nb);
		//ft_putchar('\n');
		//ft_print_primes(nb);
	}
	else
	{
		ft_putchar('0');
		ft_putchar('\n');
	}
}