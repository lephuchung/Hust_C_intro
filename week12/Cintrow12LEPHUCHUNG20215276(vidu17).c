#include <stdio.h>

void nhapmang(int *a, int *n)
{
	int i=0;
	do 
	{
		printf("Nhap vao so phan tu cua mang (1<=n<=1000) la: ");
		scanf("%d", n);
		if(*n<1||*n>1000) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(*n<1||*n>1000);
	for(i=0;i<*n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d", (a+i));
	}
}
void inmang(int *a, int n)
{
	int i=0;
	for(i;i<n;i++)
	{
		printf("%d ", *(a+i));
	}
	printf("\n");
}
void swap(int *a, int *b)
{
	int tam=*a;
	*a=*b;
	*b=tam;
}
void sort(int *a, int n)
{
	int i=0;
	int j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				swap(&a[i], &a[j]);
			}
			else continue;
		}
	}
}
int main()
{
	//sort bang con tro 
	//khai bao bien
	int a[1001];
	int n;
	//nhap du lieu 
	nhapmang(a,&n);
	//goi ham va dien dap an 
	sort(a,n);
	inmang(a,n);
}
