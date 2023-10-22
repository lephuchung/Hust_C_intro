#include <stdio.h>

void swap(int *x, int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	int a=6;
	int b=8;
	printf("a ban dau la %d\n", a);
	printf("b ban dau la %d\n", b);
	swap(&a,&b);
	printf("a ve sau la %d\n", a);
	printf("b ve sau la %d\n", b);
}
