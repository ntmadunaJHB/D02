/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntmaduna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:40:08 by ntmaduna          #+#    #+#             */
/*   Updated: 2020/07/10 15:20:40 by ntmaduna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ft_putchar(chhar c);

void	ft_print_reverse_alphabet(void)
{
	char alphabet;

	alphabet = 'z';

	while(alphabet >= 'a')
	{
		ft_putchar(alphabet);
		alphabet = alphabet - 1;
	}
}
