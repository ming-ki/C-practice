#include <stdio.h>

int main(void)
{
	/*run with x = 1,2,3*/
	int x = 0;

	switch (x + 1) {
	case 1: printf("x = 1\n");
		break;

	case 2: printf("x = 2\n");
		break;

	case 3: printf("x= 3\n");
		break;

	default:
		;
	}
	return 0;
}