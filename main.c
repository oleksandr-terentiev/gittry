#include <stdio.h>

void a(void)
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

	a();

    B();

	return 0;
}

