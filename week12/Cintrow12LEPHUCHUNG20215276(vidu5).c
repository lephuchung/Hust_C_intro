#include <stdio.h>
int addNumbers(int *fiveNumbers)
{
	int i,sum=0;
	for(i=0; i<5; i++, fiveNumbers++)
	{
		sum+= *fiveNumbers;
	}
	return sum;
}
int main()
{
	//tinh tong mang
	//khai bao bien 
	int s, i=0;
	int x[5];
	printf("Nhap vao 5 so cua mang la: ");
	for(i=0;i<5;i++)
	{
		scanf("%d", x+i);
	}
	printf("Tong mang la: %d\n", addNumbers(x));
}
