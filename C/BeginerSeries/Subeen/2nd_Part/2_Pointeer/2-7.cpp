#include <bits/stdc++.h>



int main(int argc, char const *argv[])
{
	int x = 10, y;
	int *p, *q;


	p = &x;
	y = *p;


	*p = 15;
	*q = 20;


	printf("Value of x: %d\n", x);
	printf("Value of y: %d\n", y);
	printf("Value of *p: %d\n", *p);
	printf("Value of *q: %d\n", *q);
	
	// segmentation falut

	return 0;
}