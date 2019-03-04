/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Taflaw <muzerenganit@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 20:28:49 by Taflaw            #+#    #+#             */
/*   Updated: 2019/03/03 22:12:56 by Taflaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//Sum of digits in given number

int	sum(int num)
{
	int sum;
	int n;
	int remainder;

	sum = 0;
	while (num > 0)
	{
		remainder = num % 10;
		sum = sum + remainder;
		num = num / 10;
	}
	return (sum);
}

int	main(void)
{
	int num;

	printf("Enter number: ");
	scanf("%d", &num);

	printf("Sum = %d\n", sum(num));
	return (0);

}
