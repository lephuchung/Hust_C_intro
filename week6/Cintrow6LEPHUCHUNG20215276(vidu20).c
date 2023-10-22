#include <stdio.h>

int main()
{
	//kiem tra xem co phai bang chu cai khong 
	//khai bao bien 
	char c;
	printf("Nhap vao ki tu muon kiem tra: ");
	scanf("%c", &c);
	if(c>=65&&c<=122) printf("Day la mot ki tu thuoc bang chu cai!\n");
	else printf("Day khong phai la mot ki tu thuoc bang chu cai!\n");
}
