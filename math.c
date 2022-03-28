#include <stdio.h>

int sum(int a, int b)
{
	return a + b;
}
int mul(int a, int b)
{
	return a * b;
}
int sub(int a, int b)
{
	return a - b;
}

int main()
{
	int a=5, b=3;



	printf("a = 5, b = 3\n");

	printf("a + b = %d\n", sum(a, b));
	printf("a * b = %d\n", mul(a, b));
	printf("a - b = %d\n", sub(a, b));

	return 0;
}

