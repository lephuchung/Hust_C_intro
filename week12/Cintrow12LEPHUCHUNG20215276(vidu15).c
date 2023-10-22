#include <stdio.h>
int main ()
{
	char str1[ ] = "trytoprogram";
	char str2[ 50 ];
	char *ptr1 = "hello world";
	char *ptr2;
	//look carefully
//	str2 = str1; //error
	ptr2 = ptr1; //valid
//	str1 = "program"; //error because it is defined and initialized already
	ptr1 = "program"; //valid and works
	printf("Xau ptr 1 : %s \t Xau ptr2: %s \n", ptr1, ptr2);
	return 0;
	//ptr co the khoi tao lai 
	//string thi khong 
}
