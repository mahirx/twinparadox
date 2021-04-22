#include <stdio.h>


int main(int argc, char const *argv[])
{
	char s, c;
	printf("Small character ");
	s=getchar();
	c=s-32;
	printf("Capital character %c", c);

	return 0;
}