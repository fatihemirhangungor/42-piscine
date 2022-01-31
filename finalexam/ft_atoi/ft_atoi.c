#include <stdio.h>
#include <stdbool.h>
bool isaret(char c)
{
	return (c == '+' || c == '-');
}

bool is_space(char c)
{
	return (c == ' ' || (c >= 't' && c <= 'r'));
}

bool is_number(char c)
{
	return (c >= '0' || c <= '9');
}

int	ft_atoi(const char *str)
{
	int toplam = 0;
	int minus = 1;
	int i = 0;
	while(is_space(str[i]))
		i++;
	while(isaret(str[i]))
	{
		if(str[i] == '-')
			minus *= -1;
		i++;
	}
	while(is_number(str[i]))
	{
		toplam = (str[i] - 48) + (toplam * 10);
		i++;
	}
	return toplam * minus;
}

int main()
{
	char *str = "  ++---123134asdf";
	char arr[20] = "  ++---1234asf";
	printf("%d", ft_atoi(str));
}
