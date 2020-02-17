#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa_base(int value, int base)
{
	long	my_val;
	long	buf;
	size_t	len;
	int		add_minus;
	char 	base_arr[17] = "0123456789ABCDEF";
	char	*res;

	if (base < 2 || 16 < base)
		return ("");
	add_minus = 0;
	len = 1;
	if (base == 10)
	{
		my_val = value;
		if (my_val < 0)
		{
			add_minus = 1;
			my_val = -my_val;
			len++;
		}	
	}
	else
	{
        my_val = (value < 0) ? -value : value;
	}
	buf = my_val;
	while(buf /= base)
		len++;
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	res[len] = '\0';
	while (len--)
	{
		res[len] = base_arr[my_val % base];
		my_val /= base;
	}
	if (add_minus)
		res[0] = '-';
	return (res);
}

int main(void)
{
    printf("%s", ft_itoa_base(-73570196, 5));
}
