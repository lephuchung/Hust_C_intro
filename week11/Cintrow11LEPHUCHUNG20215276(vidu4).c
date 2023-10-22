#include <stdio.h>

int main()
{
	int a, b, c;
	int *ptr;
	printf("Nhap vao 3 so a, b, c la: ");
	scanf("%d %d %d", &a, &b, &c);
	ptr=&a;
	*ptr+=100;
	printf("a=%d\n", *ptr);
	ptr=&b;
	*ptr+=100;
	printf("b=%d\n", *ptr);
	ptr=&c;
	*ptr+=100;
	printf("c=%d\n", *ptr);
}
