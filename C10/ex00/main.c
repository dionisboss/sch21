/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 07:50:35 by cmarty            #+#    #+#             */
/*   Updated: 2020/07/28 08:57:36 by cmarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUF_SIZE 4096

void	ft_putstr(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		write(1, &str[a], 1);
		a++;
	}
}

/* 1) Name of program to compile : ft_display_file
 * 2) Take file as argument.
 * 3) Read file and display content
 * 4) If file can not be read display error message
 * */
int	main(int argc, char **argv)
{
	int 	openflag;
	int 	ret;
	char	*buf[BUF_SIZE + 1];
	
	if (argc < 2)
	{
		ft_putstr("File name missing\n");
		return (1);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	openflag = open(argv[1], O_RDONLY);
	if (openflag == -1)
	{
		ft_putstr("Cannot read file.\n");
		return (1);
	}
	ret = read(openflag, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf);
	if (close(openflag) == -1)
		return (1);
	return (0);
}
