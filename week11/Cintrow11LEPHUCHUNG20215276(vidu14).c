#include <stdio.h>

int f(int x, int *py, int **ppz)
{
	int y, z;
	**ppz += 1;
	z = **ppz;
	*py += 2;
	y = *py;
	x += 3;
	return x + y + z;
}
void main()
{
	int c, *b, **a;
	c = 4;
	b = &c;
	a = &b;	
	printf("%d ", f(c, b, a));
	return 0;
//	: Con tro ppz nhan gia tri cua con tro a n�n **ppz += 1 tuong duong voi c+=1 => z = 5.
//	Con tro py nhan gia tri cua con tro b n�n *py += 2 tuong duong voi c+=2 => y = 7.
//	X nhan gi� tri cua c => x  = 4 + 3 = 7.

}
