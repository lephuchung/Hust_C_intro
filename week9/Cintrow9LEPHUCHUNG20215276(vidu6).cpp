#include <stdio.h>
int i;
void f() 
{
	int i = 0;
	i++; // chi l�m thay doi gi� tri bien i cuc bo 
}
void g() 
{
	i++; // l�m thay doi gi� tri cua bien i tong the
}
int main() 
{
	i = 10; 
	f();
	printf("i = %d", i);
	g();
	printf("\ni = %d", i);
}
