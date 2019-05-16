/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Taflaw <muzerenganit@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/10 19:51:55 by Taflaw            #+#    #+#             */
/*   Updated: 2019/03/10 20:02:03 by Taflaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	main()
{
	int i;
	int *block;
	int size;

	size = 5;
	block = (int*)malloc(sizeof(int));

	if (block == NULL)
		printf("No memory");
	else
	{
		for (i = 0; i < size; i++)
		{
			printf("%d |", *(block + i));
		}
	}
	printf("\n");

}
