#include <stdio.h>
void nhapmang(int *a, int *n)
{
	int i;
	printf("Nhap so phan tu la: ");
	scanf("%d", n);
	for(i=0;i<*n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d", (a+i));
	}
}
void inmang(int *a, int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("%d ", *(a+i));
	}
	printf("\n");
}
int main()
{
	int a[1001];
	int n;
	int b[1001];
	int m;
	nhapmang(a,&n);
	inmang(a,n);
	nhapmang(b,&m);
	inmang(b,m);
}
