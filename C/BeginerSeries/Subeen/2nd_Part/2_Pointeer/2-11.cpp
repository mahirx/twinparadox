#include <stdio.h>


int main(int argc, char const *argv[])
{
	int *p = NULL;
	*p = 100;

	printf("Value of *p: %d\n", *p);

	
	return 0;
}