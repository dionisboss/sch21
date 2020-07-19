#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[] = "iellk";
	char str2[] = "iell";
	char str3[] = "hspe";
	int test = 'k' - '\0';
	
	printf("%d - 1 and 2 \n",strcmp(str1,str2));
	printf("%d - 1 and 3 \n",strcmp(str1,str3));
	printf("%d \n",test);
}
