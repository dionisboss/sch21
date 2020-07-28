/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 14:24:41 by cmarty            #+#    #+#             */
/*   Updated: 2020/07/28 15:43:50 by cmarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/errno.h>

#define BUF_SIZE 20

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

void	engine(int openflag)
{
	int		ret;
	char	buf[BUF_SIZE];

	while ((ret = read(openflag, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
}

int		main(int argc, char **argv)
{
	int openflag;
		
	if (argc < 2)
	{
		engine(1);
	}
	while (**argv)
	{
		argv++;
		if(!(openflag = open(*argv, O_RDONLY)))
		{
			strerror(errno);
			return (1);
		}
		if (openflag == -1)
		{
			strerror(errno);
			return (1);
		}
		engine(openflag);
	}
	if (close(openflag) == -1)
		return (1);
	return (0);
}
