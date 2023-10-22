#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void tenho(char line[])
{
	int i=0;
	for(i;i<strlen(line);i++)
	{
		if(line[i]!=' ') printf("%c", line[i]);
		else break;
	}
}
int main()
{
	//tach ho 
	//khai bao bien 
	char line[101];
	//nhap du lieu 
	printf("Nhap vao ho va ten cua ban la: ");
	fgets(line,100,stdin);
	line[strlen(line)-1]='\0';
	//goi ham va dien dap an
	printf("Ho cua ban la: ");
	tenho(line);
}

