/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 23:28:21 by gloriann          #+#    #+#             */
/*   Updated: 2019/09/12 23:28:58 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 4096

void	ft_puterror(char *s)
{
	while (*s)
	{
		write(2, s, 1);
		s++;
	}
}

void	ft_display_file(char *file_name)
{
	int		fd;
	int		read_ret;
	char	buf[BUF_SIZE];

	if (-1 == (fd = open(file_name, O_RDONLY)))
	{
		return ;
	}
	while ((read_ret = read(fd, buf, BUF_SIZE)) > 0)
	{
		write(1, buf, read_ret);
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_display_file(argv[1]);
		return (0);
	}
	else if (argc == 1)
	{
		ft_puterror("File name missing.\n");
	}
	else if (argc > 2)
	{
		ft_puterror("Too many arguments.\n");
	}
	return (1);
}
