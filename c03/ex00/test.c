#include <stdio.h>
int ft_strcmp(char *s1, char *s2)
{
	int a;
	char b;

	a = 0;
	while(s1[a] != '\0')
	{
		b = s1[a] - s2 [a];
		if (b != 0)
		{
			return (b);
		}
		a++;
	}
	return(0);
}

int main(void)
{
	char str1[] = "iellk";
	char str2[] = "iell";
	char str3[] = "iella";

	printf("%d \n",ft_strcmp(str1,str2));
	printf("%d \n",ft_strcmp(str1,str3));
}


