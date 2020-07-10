/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntmaduna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:36:35 by ntmaduna          #+#    #+#             */
/*   Updated: 2020/07/10 15:02:56 by ntmaduna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void ft_print_alphabet(void)

{
	char alphabet;
	
	alphabet = 'a';
   
	while( alphabet <= 'z')
	{
		ft_putchar(alphabet);
		alphabet = alphabet + 1;
	}
	
}

