#include	<stdio.h>
#include	<unistd.h>

void	print_map(int x, int y)
{
	int	a;
	int	b;

	a = 0;
	while (a < x)
	{
		b = 0;
		while (b < y)
		{
			printf(".");
			b++;
		}
		printf("\n");
		a++;
	}
}

int	main(int argc, char **argv)
{
	/*
	if (argc > 2)
	{
		print_map(*argv[1], *argv[2]);
	}
	*/
	int x = 5;
	int y = 5;
	print_map(x, y);
	return (0);
}
