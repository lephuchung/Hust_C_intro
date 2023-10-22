#include <stdio.h>
void f(int* p, int m)
{
	m = m + 5;*p = *p + m;//trong ham nay, j=15, ngoai ham nay j=10
	//trong moi ham sau dong nay i=5+15=20
	return;
}
void main()
{
	int i=5, j=10;
	f(&i, j);
	printf("%d", i+j);//20+10=30
}
