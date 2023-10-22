#include <stdio.h>
#define print(x) printf("%d ", x)
int x;
void Q(int z)
{
	z += x;
	print(z);//x=7+5
}
void P(int *y)
{
	int x = *y + 2;//x=7
	Q(x);
	*y = x -1;//het ham thi x=6
	print(x);
}
int main()
{
	x = 5;
	P(&x);
	print(x);//x=6
	return 0;
}
