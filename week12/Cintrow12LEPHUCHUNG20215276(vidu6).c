#include <stdio.h>

int countEven(int *arr, int size)
{
	int i;
	int count =0;
	for (i=0; i<size; i++)
	{
		if (*(arr+i)%2==0) count++;
	}
	return count;
}
int main()
{
	//dem chan
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
	printf("So luong so chan trong mang la: %d",countEven(x,n));
}
