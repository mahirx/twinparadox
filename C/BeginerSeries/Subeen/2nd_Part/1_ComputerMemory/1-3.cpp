
#include <stdio.h>


int main(int argc, char const *argv[])
{
	char ch1 = 'A', ch2 = 'B';
	int n1 = 100, n2 = 100000;


	printf("value of ch1 = %c,\t", ch1);
	printf("Address of ch1 = %p\n", &ch1);


	printf("value of ch1 = %c,\t", ch2);
	printf("Address of ch1 = %p\n", &ch2);


	printf("value of ch1 = %d,\t", n1);
	printf("Address of ch1 = %p\n", &n1);



	printf("value of ch1 = %d,\t", n2);
	printf("Address of ch1 = %p\n", &n2);

	return 0;
}