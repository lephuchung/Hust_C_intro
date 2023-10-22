#include<stdio.h>
void f(int *p, int *q)
{
	//ban dau p tro vao i, q tro vao j 
	p = q;//sau buoc nay p=&j, p tro vao j
	*p = 2;//j=2, i khong doi 
}
int i = 0, j = 1;
int main()
{
	f(&i, &j);
	printf("%d %d\n", i, j);
	getchar();//khong de lam gi, co the bo neu thich 
	return 0;
}
