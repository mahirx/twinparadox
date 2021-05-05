#include <stdio.h>


int define_char_int(int x)
{
	if (x >= 48 && x <= 57)
	{
		return 1;
	}

	else{
		return 0;
	}
}



int main(int argc, char const *argv[])
{
	char c;
	printf("Type the character: ");
	c = getchar();
	// putchar(c);
	printf("%d\n", define_char_int(c));
	return 0;
}