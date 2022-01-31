#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_nbr(int sayi)
{
	if (sayi >= 10)
	{
		ft_nbr(sayi / 10);
	}
	ft_putchar((sayi % 10) + '0');
}

int main()
{
	int sayi = 1;
	while (sayi <= 100)
	{
		if (sayi % 3 == 0 && sayi % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (sayi % 3 == 0)
			write(1, "fizz", 4);
		else if (sayi % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_nbr(sayi);
		sayi++;
		write(1, "\n", 1);
	}
}
