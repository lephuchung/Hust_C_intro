#include <stdio.h>

int main()
{
	//in alphabet
	//khai bao bien 
	int *ptr=NULL;
	int a=64;
	ptr=&a;
	int i=0;
	for(i=0;i<26;i++)
	{
		*ptr+=1;
		printf("%c ", *ptr );
	}
}
