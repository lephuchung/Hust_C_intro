#include <stdio.h>
int i;
void f() 
{
	int i = 0;
	i++; // chi làm thay doi giá tri bien i cuc bo 
}
void g() 
{
	i++; // làm thay doi giá tri cua bien i tong the
}
int main() 
{
	i = 10; 
	f();
	printf("i = %d", i);
	g();
	printf("\ni = %d", i);
}
