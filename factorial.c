/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Factorial.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Taflaw <muzerenganit@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 19:28:34 by Taflaw            #+#    #+#             */
/*   Updated: 2019/03/03 20:21:19 by Taflaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	factorial(int num)

{
	int i;
	int result;

	result = 1;
	for (i = num; i >= 1; i--)
	{
		result = result * i;
	}
	return (result);
}

int	main(void)
{
	int num;
	int i;
	for (i = 0; i < 10; i++)
	{
		num = factorial(i);
		printf("%d factorial = %d\n", i, num);

	}
	return (0);
}
