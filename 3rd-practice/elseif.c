#include <stdio.h>

int main(void)
{
	/*run with x = 4,5,7*/
	int x = 4;
	float y = 0;

	if (x % 2 == 0)
		y += x / 2;
	else if (x % 4 == 1)
		y += 2 * (x + 3 / 4);
	else
		y += (x + 1 / 2);

	printf("x, y are %d, %f.\n", x, y);

	return 0;
}