#include <stdio.h>
char	*ft_strrev(char *str)
{
	int i = 0;
	int size = 0;
	char tmp;
	while(str[size] != '\0')
		size++;
	while(i < size / 2)
	{
		tmp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = tmp;
		i++;
	}
	return str;
}

int main()
{
	char arr[] = "fatihe";
	printf("%s",ft_strrev(arr));
}
