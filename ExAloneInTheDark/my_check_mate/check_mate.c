#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *s)
{
    while (*s)
    {
        ft_putchar(*s);
        s++;
    }
}

int ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);

}

int is_k(int i, int j, int size, char **board)
{
    return (i >= 0 && i < size && j >= 0 && j < size && board[i][j] == 'K');
}

int is_figure(int i, int j, int size, char **board)
{
	return (i >= 0 && i < size && j >= 0 && j < size &&
		(board[i][j] == 'K' || board[i][j] == 'P' || board[i][j] == 'B' || board[i][j] == 'R' || board[i][j] == 'Q')
		);
}

int is_check_position_p(int i, int j, int size, char **board)
{
    return (
        is_k(i - 1, j - 1, size, board) ||
        is_k(i - 1, j + 1, size, board)
        );
}

int is_check_position_b(int i, int j, int size, char **board)
{
    int check_i;
    int check_j;

    check_i = i;
    check_j = j;
    while (check_i < size && check_j < size)
    {
        if (is_k(check_i, check_j, size, board))
            return (1);
        check_i++;
        check_j++;
    }
    check_i = i;
    check_j = j;
    while (check_i >= 0 && check_j >= 0)
    {
        if (is_k(check_i, check_j, size, board))
            return (1);
        check_i--;
        check_j--;
    }
    check_i = i;
    check_j = j;
    while (check_i >= 0 && check_j < size)
    {
        if (is_k(check_i, check_j, size, board))
            return (1);
        check_i--;
        check_j++;
    }
    check_i = i;
    check_j = j;
    while (check_i < size && check_j >= 0)
    {
        if (is_k(check_i, check_j, size, board))
            return (1);
        check_i++;
        check_j--;
    }
    return (0);
}

int is_check_position_r(int i, int j, int size, char **board)
{
    int check_i;
    int check_j;

    check_i = i;
    check_j = 0;
    while (check_j < size)
    {
    	if (!(check_i == i && check_j == j))
		{
			if (is_k(check_i, check_j, size, board))
				return (1);
			if (is_figure(check_i, check_j, size, board))
				break;
		}
        check_j++;
    }
    check_i = 0;
    check_j = j;
    while (check_i < size)
    {
		if (!(check_i == i && check_j == j))
		{
			if (is_k(check_i, check_j, size, board))
				return (1);
			if (is_figure(check_i, check_j, size, board))
				break;
		}
        check_i++;
    }
    return (0);
}

int is_check_position_q(int i, int j, int size, char **board)
{
    return (
        is_check_position_b(i, j, size, board) ||
        is_check_position_r(i, j, size, board)
        );
}

int is_check_position(int i, int j, int size, char **board)
{
    return (
        (board[i][j] == 'P' && is_check_position_p(i, j, size, board)) ||
        (board[i][j] == 'B' && is_check_position_b(i, j, size, board)) ||
        (board[i][j] == 'R' && is_check_position_r(i, j, size, board)) ||
        (board[i][j] == 'Q' && is_check_position_q(i, j, size, board))
        );
}

void check_mate(int size, char **board)
{
    int i;
    int j;

    i = 0;
    while (i < size) { // normalization of chess board
        board[i] = board[i + 1];
        if (ft_strlen(board[i]) != size)
        {
            ft_putstr("Fail\n");
            return ;
        }
        i++;
    }

    i = 0;
    while (i < size)
	{
		ft_putstr(board[i++]);
		ft_putchar('\n');
	}

    i = 0;
    while (i < size)
    {
        j = 0;
        while (j < size)
        {
            if (is_check_position(i, j, size, board))
            {
                ft_putstr("Success\n");
                return ;
            }
            j++;
        }
        i++;
    }
    ft_putstr("Fail\n");

}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        if (argc - 1 == ft_strlen(argv[1]))
            check_mate(argc -  1, argv);
        else
            ft_putstr("Fail\n");
    }
    else
    {
        ft_putstr("\n");
    }

}
