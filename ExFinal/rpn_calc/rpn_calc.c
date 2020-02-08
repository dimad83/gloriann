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

int ft_is_operator(char c)
{
	return (c == '+' || c == '-' || c   == '*' || c == '/' || c == '%');
}

int ft_is_number(char c)
{
	return ('0' <= c && c <= '9');
}

int ft_is_space(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ');
}

int operate(int el1, int el2, char operator, int *res)
{
	if (operator == '/')
	{
		if (el2 == 0)
			return 0;
		else
		{
			*res = el1 / el2;
			return 1;
		}
	}
	else if (operator == '%')
	{
		if (el2 == 0)
			return 0;
		else
		{
			*res = el1 % el2;
			return 1;
		}
	}
	else if (operator == '+')
	{
		*res = el1 + el2;
		return 1;
	}
	else if (operator == '-')
	{
		*res = el1 - el2;
		return 1;
	}
	else if (operator == '*')
	{
		*res = el1 * el2;
		return 1;
	}
	return 0;
}

void calculate(char *s)
{
	int i;
	int j;
	int *numbers;
	int len;
	int res;

	len = ft_strlen(s);
	numbers = malloc(sizeof(int) * len);

	i = 0;
	j = 0;
	while (i < len)
	{
		if (ft_is_number(s[i]))
		{
			numbers[j] = atoi(&s[i]);
			j++;
			while (i < len && ft_is_number(s[i]))
				i++;
		}
		else if (ft_is_operator(s[i]))
		{
			if (i == len - 1 || ft_is_space(s[i +  1]))
			{
				if (j > 1)
				{
					if (operate(numbers[j -  2], numbers[j - 1], s[i], &res))
					{
						numbers[j - 2] = res;
					}
					else
					{
						printf("Error\n");
						return ;
					}
					j--;
				}
				else
				{
					printf("Error\n");
					return ;
				}
			}
			else
			{
				printf("Error\n");
				return ;
			}
		}
		else if (!ft_is_space(s[i]))
		{
			printf("Error\n");
			return ;
		}

		i++;
	}
	if (j > 1)
	{
		printf("Error\n");
		return ;
	}
	printf("%d\n", numbers[0]);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		calculate(argv[1]);
	}
	else
	{
		printf("Error\n");
	}

}