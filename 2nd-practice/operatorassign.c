#include <stdio.h>

int main(void)
{
	int a = 1;
	int b = 2;
	int c = 3;

	a += 5;
	b *= 4;
	c += a * b;
	c %= 6;

	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
}