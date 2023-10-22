#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char s1[]="Happy";
	char s2[]="New Year";
	char s3[40]="";
	printf("s1 = %s\ns2 = %s\n", s1, s2);
	printf("strcat( s1, s2 ) = %s\n", strcat( s1, s2 ));//sau cau lenh nay, s1 la s1s2
	printf("strncat( s3, s1, 6 ) = %s\n", strncat( s3, s1, 6 ));//cau lenh nay lam khoi tao s3 la 6 gia tri dau tien cua s1
	printf("strcat( s3, s1 ) = %s\n", strcat( s3, s1 ));// cau lenh nay in ra s3s1
	return 0;
	
}
