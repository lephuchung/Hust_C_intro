#include <stdio.h>
int n;
void nhapmang(int *a)
{
	int i=0;
	do
	{
		printf("Nhap vao so phan tu cua mang (1<=n<=1000) la: ");
		scanf("%d", &n);
		if(n<1||n>1000) printf("Nhap loi, xin moi nhap lai!\n");
	}	
	while(n<1||n>1000);
	for(i=0;i<n;i++)
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
void reversearray(int *a, int size)
{
	int i, j, tmp;
	i=0; 
	j= size -1;
	while(i<j)
	{
		tmp = *(a+i);
		*(a+i) = *(a+j);
		*(a+j) = tmp;
		i++; 
		j--;
	}
}
int main()
{
	//dao nguoc mang 
	//khai bao bien  
	int a[1001];
	//nhap du lieu 
	nhapmang(a);
	inmang(a,n);
	reversearray(a,n);
	inmang(a,n);
	//bai nay la ham swap co ban 
	//chi dao den khi i<size-i vi neu dao den i<size thi se dao 2 lan 
		
}
