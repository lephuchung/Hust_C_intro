#include <stdio.h>

int main()
{
	//so sanh su khac biet cua "==" va "="
	//khai bao bien 
	int a=5, b=6, c=7;
	//giai thich
	if(b-a==b-c) printf("2 bieu thuc nay bang nhau\n");
	else printf("2 bieu thuc nay khong bang nhau\n");
	//day la phep so sanh
	printf("%d\n", a);
	a=b-c;
	printf("%d\n", a);
	//day la phep gan	
}
