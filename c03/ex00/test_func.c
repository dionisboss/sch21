#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[] = "iello";
	char str2[] = "iello";
	char str3[] = "hspee";
	int test = 'i' - 'h';
	
	printf("%d - 1 and 2 \n",strcmp(str1,str2));
	printf("%d - 1 and 3 \n",strcmp(str1,str3));
	printf("%d \n",test);
}
