#include <stdio.h>

int *maximum(int *a, int size)
{
	int *pMax= NULL;
	int  *p= NULL; 
	pMax = a;
	if (a==NULL) return NULL;
	for(p=a+1; p<a+size; p++) 
	{
		if (*p > *pMax)
		{
			pMax = p;
		}
	}
	return pMax;
}

int main()
{
	//tim max
	//khai bao bien 
	int n, i; 
	int x[1001];
	//nhap du lieu 
	do 
	{
		printf("Nhap vao so phan tu cua mang (1<=n<=1000) la: ");
		scanf("%d", &n);
		if(n<1||n>1000) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<1||n>1000);
	for(i=0;i<n;i++)
	{
		printf("x[%d]=", i);
		scanf("%d", x+i);
	}
	//goi ham va dien dap an 
	printf("Gia tri lon nhat cua mang la: %d", *maximum(x,n));
}
