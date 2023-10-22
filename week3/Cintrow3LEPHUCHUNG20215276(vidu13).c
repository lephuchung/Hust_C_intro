#include <stdio.h>

int main()
{
	unsigned char a = 128;
	unsigned char b = 128;
	unsigned char c = a + b;
	printf("ket qua cua bien c la: %d\n", c);
	//do char chi co gioi han la 255, ma a+b la 256, gay hien tuong tran so nen ket qua tra ve la 0
}
