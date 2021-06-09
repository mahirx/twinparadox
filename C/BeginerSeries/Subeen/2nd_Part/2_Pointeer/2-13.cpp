#include <stdio.h>



int main(int argc, char const *argv[])
{
	char s[] = "Bangladesh";
	char *p;

	p = s;


	printf("Name of our country : %s\n", p);
	printf("Address if s : %p\n", s);
	return 0;
}