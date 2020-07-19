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
