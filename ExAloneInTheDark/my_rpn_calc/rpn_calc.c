#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int ft_is_digit(char c)
{
	return ('0' <= c && c <= '9');
}

int ft_is_space(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ');
}

int ft_is_operator(char *s)
{
	return (
		(s[0] == '+' || s[0] == '-' || s[0]  == '*' || s[0] == '/' || s[0] == '%')
		&& (s[1] == '\0' || ft_is_space(s[1]))
		);
}

long operate(long el1, long el2, char operator, long *res)
{
	if (operator == '/')
		if (el2 == 0)
			return 0;
		else
			*res = el1 / el2;
	else if (operator == '%')
		if (el2 == 0)
			return 0;
		else
			*res = el1 % el2;
	else if (operator == '+')
		*res = el1 + el2;
	else if (operator == '-')
		*res = el1 - el2;
	else if (operator == '*')
		*res = el1 * el2;
	else
		return 0;
	return 1;
}

int calculate(char *s)
{
	int i;
	int j;
	long *numbers;
	long len;
	long res;

	len = ft_strlen(s);
	numbers = malloc(sizeof(long) * len);

	i = 0;
	j = 0;
	while (s[i])
	{
		if (ft_is_operator(s + i))
		{
			if (j > 1 && operate(numbers[j -  2], numbers[j - 1], s[i], &res))
			{
				numbers[j - 2] = res;
				j--;
			}
			else
				return (0);
		}
		else if (ft_is_digit(s[i]) || s[i] == '-')
		{
			numbers[j] = atoi(&s[i]);
			j++;
			while (s[i + 1] && ft_is_digit(s[i + 1]))
				i++;
			if (s[i + 1] && !ft_is_space(s[i + 1]))
				return (0);
		}
		else if (!ft_is_space(s[i]))
			return (0);
		i++;
	}
	if (j > 1)
		return (0);
	printf("%ld\n", numbers[0]);
	return (1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (!calculate(argv[1]))
			printf("Error\n");
	}
	else
	{
		printf("Error\n");
	}

}