#include <stdio.h>

int main() 
{
	int i=0;
	int* ptrarray[4];
	int w = 100, x = 200, y = 300, z = 400;
	ptrarray[0] = &w;
	ptrarray[1] = &x;
	ptrarray[2] = &y;
	ptrarray[3] = &z;
	for (i = 0; i < 4; i++) 
	{
		printf("The value %d has the adddress %p\n",*ptrarray[i], ptrarray[i]);
	}
	return 0;
	//cac bien con tro cua mang ptrarray tro toi dia chi cua w x y z 
	//nen *ptrarray la gia tri cua w x y z va ptrarray la dia chi cua w x y z
	
}
