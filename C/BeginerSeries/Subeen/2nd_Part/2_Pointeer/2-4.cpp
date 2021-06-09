#include <stdio.h>


int main(int argc, char const *argv[])
{
	int x = 10;
	int *p;

	p = &x;

	printf("Value of x: %d\n", x);

	*p = 20;

	printf("Value of x: %d\n", x);
	printf("Addrss of x: %d\n", &x);
	printf("Value of p: %d\n", p);
	
	return 0;
}