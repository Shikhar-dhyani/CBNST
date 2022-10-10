// Iteration

#include <stdio.h>
#include <math.h>

float f(float x)
{
	return cos(x) - 3 * x + 1;
}

float fi(float x)
{
	return (cos(x) + 1) / 3;
}

float diff(float x)
{
	return -sin(x) / 3;
}

int main()
{
	float x, e;
	printf("Enter value of x :");
	scanf("%f", &x);

	while (fabs(diff(x)) >= 1)
	{
		printf("Iteration method cannot be applied  Enter again value of x");
		scanf("%f", &x);
	}

	printf("Iteration can be applied on (x*x*x + 1)/5 fun , Enter Allowed Error :\n");
	scanf("%f", &e);

	int i = 1;

	while (1)
	{
		float x1 = fi(x);

		if (fabs(x1 - x) < e)
		{
			printf("x=%f  iteration=%d\n", x1, i);
			printf("Root found :%f in iteration :%d", x1, i);
			break;
		}

		printf("x=%f  iteration=%d\n", x1, i);
		x = x1;
		i++;
	}

	return 0;
}
