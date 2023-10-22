#include <stdio.h>

int main()
{
	//dem so ki tu
	//khai bao bien
	char c;
	int count=0;
	printf("Dien vao 1 cum tu, ket thuc bang dau \".\" \n");
	printf("Toi se giup dem so ki tu\n");
	for (count=0; (c=getchar() != '.'); count++)
	{ }
	printf("Number of characters is %d\n", count);
}
