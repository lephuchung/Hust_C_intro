#include <stdio.h>

extern int gb;
void tang1()
{
	++gb;
}
int gb;
int main()
{
	gb=1;
	printf("bien truoc tang: %d\n", gb);
	tang1();
	printf("bien sau tang: %d\n", gb);
}
