#include <stdio.h>

int main(void)
{
	int number;

	printf("���� �Է��ϼ��� : ");
	scanf("%d", &number);

	if (number % 2 == 0)
	{
		printf("¦���Դϴ�.");
	}
	else
	{
		printf("Ȧ���Դϴ�.");
	}
	return 0;
}