#include <stdio.h>
#include <limits.h>
int main()
{
	int q;
	printf("Gioi han cua tap int: %d<h<%d\n", INT_MIN, INT_MAX);
	printf("Nhap vao 1 so integer (%d<q<%d): ", INT_MIN, INT_MAX);
	scanf("%d", &q);
	printf("So integer vua nhap la: %d", q);
	
}
