#include <stdio.h>

int main()
{
	//chuong trinh hoi ten nguoi dung 
	//khai bao bien
	char ten[21];
	int n;
	//chuong trinh
	printf("Xin chao ban, co the cho minh biet ten duoc khong?\n");
	do 
	{
		printf("Neu co an phim 1, neu khong an phim 0\n");
		scanf("%d", &n);
	}
	while(n<0||n>1);
	if(n==1) 
	{
		scanf("%20s", &ten);
		printf("ten ban la %s, toi nho roi\n", ten);
		printf("rat vui vi duoc lam quen voi ban\n");
	}
	if(n==0) 
	{
		printf("rat mong lan gap nhau toi minh se biet ten cua ban");
	}
}
