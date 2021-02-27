/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 11:43:26 by adubeau           #+#    #+#             */
/*   Updated: 2021/02/27 16:28:56 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#define MWIDTH  100
#define MHEIGHT 100

int main(void) {
    FILE * fp;
    fp = fopen("numbers.dict.txt","r");

	int a;
	int b;

	a= 50;
	b = 50;

    char points[a][b];
    int i,j;

    for(i=0; i<a; i++) {
        for(j=0; j<b; j++) {
            fscanf(fp,"%c",&points[i][j]);
        }
    }

    for(i=0; i<a; i++) {
        for(j=0; j<b; j++) {
           // printf("%c",points[i][j]);
        }
    }
	int i;
	int j;
	i = 0;
	j = 0;
	while (i <= 50)
	{
		if(points[0][i] >= 'a' || points[0]
			while ()
			{
		
			}
		}
		i++;
	}
	printf("%c",points[0][]);
    return 0;
}
