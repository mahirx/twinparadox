#include <stdio.h>


int main(int argc, char const *argv[])
{
	double pi = 3.14159265358;

	int *ptr;


	ptr = &pi;


	printf("Value of pi : %lf\n", pi);
	printf("Value of pi : %lf\n", *ptr);

	
	return 0;
}
