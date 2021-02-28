/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 11:43:26 by adubeau           #+#    #+#             */
/*   Updated: 2021/02/28 09:54:15 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>

#define SIZE 100
#define MWIDTH  100
#define MHEIGHT 100
#define BUF_SIZE 4096
void	ft_prtstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write (1, &str[i], 1);
	write(1, " ", 1);
}
void	ft_putchar(char c)
{
	write (1, &c, 1);
}
/*
int	strlen(*str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}
*/
void getun(char a, int row, char dict[row][row])
{
	int i;
	int j;
	i = 0;
	j = 0;
	while (dict[i][0] != '3')
		i++;
	while (dict[i][j] < 'a' || dict[i][j] > 'z')
		j++;
	while (dict[i][j] >= 'a' && dict[i][j] <= 'z')
	{
		ft_putchar(dict[i][j]);
		j++;
	}
	/*
	while (i < row)
	{
		j = 0;
		while (j < row)
		{
		write(1, &dict[i][j], 1);
		j++;
		}
		i++;
	}
	*/
}

void	ft_doeverything(int row, char *str, char dict[row][row])
{
	int i;
	int j;
	int len;

	i = 0;
	j = 0;
while (str[i])
	{
		getun(str[i], row, dict);
		i++;
		write (1, " ", 1);
	}


/*	while (i < row)
	{
		j = 0;
		while (j < row)
		{
			write(1, &dict[i][j], 1);
			j++;
		}

		i++;
	}
*/	
}

int	getnb(char *str)
{
	int nb;
	int i;

	i = 0;
	while (str[i])
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb);
}


int main(int argc, char **argv) {
    FILE * fp;
	int nb;
	int i;
	int temp;
	nb = getnb(argv[1]);
	printf("%d", nb);	
    fp = fopen("numbers.dict.txt","r");
	int row;	
	int fd;
	row = 0;
	char buffer;
	fd = open("numbers.dict.txt", O_RDONLY);
	while (read(fd, &buffer, 1))
			if (buffer == '\n')
				row++;	
	int a;
	int b;
	a= row;
	b = row;

    char points[a][b];
    int j;
	i = 0;
while (i < row)
	{
		j = 0;
		while (j < row)
		{	
			fscanf(fp, "%c", &points[i][j]);
			j++;
		}		
		i++;
	}
	ft_doeverything(row, argv[1], points);
	i = 0;
   return 0;
}
