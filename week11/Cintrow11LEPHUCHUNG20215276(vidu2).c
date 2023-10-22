#include <stdio.h>

int main()
{
	int x, y, z;
	int *ptr;
	printf("Nhap vao 3 so x, y, z la: ");
	scanf("%d %d %d", &x, &y, &z);
	ptr=&x;
	printf("x=%d\n", *ptr);
	ptr=&y;
	printf("y=%d\n", *ptr);
	ptr=&z;
	printf("z=%d\n", *ptr);
}
