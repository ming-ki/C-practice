#include <stdio.h>

int main(void)
{
	int age;

	printf("³ªÀÌ: ");
	scanf("%d", &age);

	if (age < 18)
	{
		printf("You are a minor");
	}
	else
	{
		printf("You are not a minor");
	}

	return 0;
}