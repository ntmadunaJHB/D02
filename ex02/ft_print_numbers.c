/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntmaduna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:42:22 by ntmaduna          #+#    #+#             */
/*   Updated: 2020/07/09 10:44:59 by ntmaduna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)

{
	int	number;
	
	number = '0';
	
	while(number <= '9')
	{
		ft_putchar(number);
		number = number + 1;
	}
}
