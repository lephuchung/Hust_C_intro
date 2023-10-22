#include <stdio.h>

int main()
{
	char *ptr = "ABCDE";
	printf("%c\n", *&*&*ptr);
	return 0;
	//*ptr la gia tri ABCDE
	//&*ptr la dia chi cua o nho chua ABCDE
	//*&*ptr la gia tri ABCDE
	//&*&*ptr la dia chi cua o nho chua ABCDE
	//*&*&*ptr la gia tri ABCDE
	//%c lay chu dau tien 
	//nen in ra chu A
}
