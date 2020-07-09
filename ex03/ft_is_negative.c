#include <unistd.h>

void	ft_is_negative(int interger)
{
	if(interger >= 0)
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
}
