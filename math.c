#include <stdio.h>

int sum(int a, int b)
{
	return a + b;
}

int main()
{
	int a=5, b=3;



	printf("a = 5, b = 3\n");

	printf("a + b = %d\n", sum(a, b));

	return 0;
}
