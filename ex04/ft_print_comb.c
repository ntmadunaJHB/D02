/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntmaduna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 12:28:03 by ntmaduna          #+#    #+#             */
/*   Updated: 2020/07/10 15:26:44 by ntmaduna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char numb1;
	char numb2;
	char numb3;

	numb1 = '0';
	while(numb1 <= '7')
	{
		numb2 = '1';
		while(numb2 <= '8')
		{
			numb3 = '2';
			while(numb3 <= '9')
			{
				ft_putchar(numb1);
				ft_putchar(numb2);
				ft_putchar(numb3);
				ft_putchar(',');
				ft_putchar(' ');
				numb3++;
			}
			numb2++;
		}
		numb1++;
	}
}

