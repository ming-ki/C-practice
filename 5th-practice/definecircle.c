#include <stdio.h>
/*#define _USE_MATH_DEFINES*/
/*#include <math.h>*/

#define PI 3.14
void circle(float);
float cc, ar;

int main(void)
{
	float rd = 2.3;
	circle(rd);

	printf("Circumference is %f. \n", cc);
	printf("Area is %f. \n", ar);

	return 0;
}

void circle(float r)
{
	/*cc=2*M_PI*r;
	ar = M_PI*r*r;*/
	cc = 2 * PI * r;
	ar = PI * r * r;

}