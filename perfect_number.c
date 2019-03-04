/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perfect_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Taflaw <muzerenganit@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 19:03:16 by Taflaw            #+#    #+#             */
/*   Updated: 2019/03/04 19:14:44 by Taflaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	perfect_number(int num)
{
	int sum;
	int i;

	i = 1;
	sum = 0;
	while (i < num)
	{
		if (num % i == 0)
			sum = sum + i;
		i++;
	}
	return (sum);
}

int	main(void)
{
	int num;

	printf("Enter number: ");
	scanf("%d", &num);

	if (num == perfect_number(num))
		printf("Perfect number!\n");
	else
		printf("Not a perfect number!\n");
	return (0);
}
