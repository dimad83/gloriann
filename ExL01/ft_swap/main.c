#include <stdio.h>
void	ft_swap(int *a, int *b);
int main(void)
{
    int a = 23;
    int b = 98;
    printf("%d %p, %d %p %x\n", a, &a, b, &b, &b);
    ft_swap(&a, &b);
    printf("%d %p, %d %p\n", a, &a, b, &b);
}