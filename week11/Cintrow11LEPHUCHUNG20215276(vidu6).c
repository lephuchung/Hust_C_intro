#include <stdio.h>

void swap(int *a, int *b, int *c)
{
	int temp=*a;
	*a=*b;
	*b=*c;
	*c=temp;
}
int main()
{
	int a, b, c;
	printf("Nhap vao gia tri a, b, c la: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("a ban dau la %d\n", a);
	printf("b ban dau la %d\n", b);
	printf("c ban dau la %d\n", c);
	swap(&a,&b,&c);
	printf("a ve sau la %d\n", a);
	printf("b ve sau la %d\n", b);
	printf("c ve sau la %d\n", c);
}
