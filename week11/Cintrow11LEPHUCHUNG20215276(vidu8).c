#include <stdio.h>

void swap(int *x, int *y, int *z)
{
	int tam=*x;
	*x=*y;
	*y=*z;
	*z=tam;
}
int main()
{
	int  x, y, z;
	int *p, *q, *r;
	printf("Nhap vao gia tri cua 3 so x, y, z la: ");
	scanf("%d %d %d", &x, &y, &z);
	p=&x;
	q=&y;
	r=&z;
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	printf("z=%d\n",z);
	printf("p=%p\n",p);
	printf("q=%p\n",q);
	printf("r=%p\n",r);
	printf("*p=%d\n",*p);
	printf("*q=%d\n",*q);
	printf("*r=%d\n",*r);
	printf("\n");
	swap(&x,&y,&z);
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	printf("z=%d\n",z);
	printf("p=%p\n",p);
	printf("q=%p\n",q);
	printf("r=%p\n",r);
	printf("*p=%d\n",*p);
	printf("*q=%d\n",*q);
	printf("*r=%d\n",*r);
	printf("\n");
	swap(&p,&q,&r);
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	printf("z=%d\n",z);
	printf("p=%p\n",p);
	printf("q=%p\n",q);
	printf("r=%p\n",r);
	printf("*p=%d\n",*p);
	printf("*q=%d\n",*q);
	printf("*r=%d\n",*r);
	//cau 2 la doi cho co ban nhu nhung bai truoc nen em khong ban them gi
	//cau 3 la doi cho p, q, r ma p la dia chi cua a,  laq dia chi cua b, r la dia chi cua c
	//doi dia chi cua p, q, r la doi dia chi cua a, b, c
}
