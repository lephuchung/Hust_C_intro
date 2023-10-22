#include <stdio.h>

int main()
{
	//so sanh 3 so nhap vao
	//khai bao bien 
	int a, b, c;
	int max, min;
	//nhap vao du lieu 
	printf("Nhap vao 3 so muon so sanh:\n");
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	printf("c=");
	scanf("%d", &c);
	//giai thuat va dien dap an
	max=a;
	if(max<b) max=b;
	if(max<c) max=c;
	min=c;
	if(min>b) min=b;
	if(min>a) min=a;
	printf("So nho nhat la: %d\n", min);
	printf("So lon nhat la: %d\n", max);
}
