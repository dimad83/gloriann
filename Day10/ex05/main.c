#include <stdio.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int));

int cmp(int a1, int a2)
{
	if (a1 < a2)
		return (-5);
	else if (a1 == a2)
		return (0);
	else 
		return (69);
}

int main(void)
{
	int length = 0;
	int arr[4] = {};
	printf("%d", ft_is_sort(arr, length, cmp));		
	return 1;
}