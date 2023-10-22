#include <stdio.h>

int main()
{
	int a=1;
	printf("Nhap vao so a la: ");
	scanf("%d", &a);
	switch(a)
	{
		case 1:
			{
				printf("a=1\n");
			}
		case 2:
			{
				printf("a=2\n");
				break;
			}
		case 3:
			{
				printf("a=3\n");
			}
		//nhap vao 1 do khong co break nen in a=1;a=2 roi bi dung lai o lenh break
		//nhap vao 2 in ra a=2 do co lenh break
		//nhap vao 3 in ra a=3 du khong co lenh break vi day la truong hop cuoi, sau khong con case nao!
	}
}
