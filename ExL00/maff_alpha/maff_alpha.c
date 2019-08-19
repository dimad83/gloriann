#include <unistd.h>
int main(void)
{
	int i = 0;
	char res;
	
	res = 'a';
	while (res != 'Z' && res != 'z')
	{
		if (i%2)
			res = i + 'A';
		else
			res = i + 'a';
		write(1, &res, 1);
		i++;
	}
}