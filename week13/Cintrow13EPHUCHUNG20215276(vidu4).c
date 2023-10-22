#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ktr(char line[])
{
	int i=0;
	if(strlen(line)!=7) return 0;
	while(line[i]!='\0')
	{
		if(i<3)
		{
			if((line[i]<65||line[i]>90)&&(line[i]<97||line[i]>122))return 0;
		}
		else if(i<7&&i>=3)
		{
			if(line[i]<48||line[i]>57) return 0;
		}
		i++;
	}
	return 1;
}
int main()
{
	//kiem tra dinh dang ma khach hang 
	//khai bao bien 
	char line[100];
	//nhap du lieu 
	printf("Nhap vao ma khach hang: ");
	fgets(line,100,stdin);
	line[strlen(line)-1]='\0';
	fflush(stdin);
	if(ktr(line)==1) printf("Dung\n");
	else printf("Sai\n");
}
