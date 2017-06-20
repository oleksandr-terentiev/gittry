#include <stdio.h>

void A(void)
{
	printf("a\r\n");
}

void B(void)
{
        printf("B\r\n");
}


int main(void)
{
	printf("Hello, World!\r\n");

	A();

    B();

	return 0;
}

