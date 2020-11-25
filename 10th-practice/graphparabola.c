#include <stdio.h>
#define N 10
#define MAX 100.0

int main(void)
{
	double x[N], y[N];
	double bin = MAX / N;
	double a = -0.02, b = 2, c = 0;
	int i;

	for (i = 0; i < N; i++)
	{
		x[i] = bin * i;
	}
	for (i = 0; i < N; i++)
	{
		y[i] = a * x[i] * x[i] + b * x[i] + c;
	}
	for (i = 0; i < N; i++)
	{
		printf("%+10.2f, %+10.2f\n", x[i], y[i]);
	}
	return 0;
}