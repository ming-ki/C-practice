#include <stdio.h>

int main(void)
{
	int i = 0;
	/*while(i<2) printf("i is %d.\n",i++)*/

	do {
		printf("i is %d.\n", i++);
	} while (i < 2);

	/*while(i>0) printf("i is %d.\n",--i);*/

	do {
		printf("i is %d.\n", --i);
	} while (i > 0);

	return 0;
}
