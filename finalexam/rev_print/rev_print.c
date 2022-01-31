#include <unistd.h>

char	*rev_print(char *str)
{
	int i;
	int size;
	
	size = 0;
	while(str[size])
		size++;
	while(i < size)
	{
		write(1, &str[size - 1 - i], 1);
		i++;
	}
	return (str);
}

int main()
{
	rev_print("fatih");
}
