#include "list.h"

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		do_op(atoi(argv[1]), argv[2][0], atoi(argv[3]));
	}
	printf("\n");
	return (1);
}