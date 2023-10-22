#include <stdio.h>

int main()
{
	//nhap vao mot ki tu toi dua ra vi tri cua no trong bang chu cai 
	//khai bao bien 
	char c;
	//nhap du lieu
	printf("Nhap vao ki tu c: ");
	scanf("%c", &c);
	printf("vi tri cua chu %c trong bang chu cai la: %d\n", c, c-'a'+1);
}
