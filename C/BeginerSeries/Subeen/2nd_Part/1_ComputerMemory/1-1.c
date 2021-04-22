#include <stdio.h>


int main(int argc, char const *argv[])
{
	for (int i = 33; i <= 126; i++)
	{
		printf("ASCII code for %c is %d\n", i, i);
	}
	return 0;
}