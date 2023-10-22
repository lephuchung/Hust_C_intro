#include <stdio.h>

int main()
{
	//su dung while do de in ra mot day so nguyen duong nho hon so cho truoc
	//khai bao bien 
	int n=1;
	int i;
	//nhap du lieu
	printf("Nhap vao so lon nhat cua day: ");
	scanf("%d", &i);
	//giai thuat va dien dap an
	do
	{
		printf("%d ", n);
		n++;	
	} 
	while(n<=i);
	printf("\n");
}
