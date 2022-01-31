#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	control(char c)
{
	if (c != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0' - 1;
	while (i < '7')
	{
		i++;
		j = i;
		while (j < '8')
		{
			j++;
			k = j;
			while (k < '9')
			{
				k++;
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				control(i);
			}
		}
	}
}
