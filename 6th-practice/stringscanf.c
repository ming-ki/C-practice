#include <stdio.h>

int main(void)
{
	/* char str[100];
	printf("Input \"Hello\":");
	scanf("%s", str);
	printf("%s\n", str); */

	/* char cArr[100];
	printf("Input \"Hello, World!\":");
		scanf("%s", cArr);
	printf("%s\n", cArr); */

	char cArray[100];
	printf("Input \"Hello, World!\":");
	gets(cArray);
	printf("%s", cArray);

	return 0; 
}