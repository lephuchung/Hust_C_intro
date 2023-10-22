#include <stdio.h>
#include <string.h>

void doichu(char line[], char a, char b)
{
	int i=0;
	while(line[i]!='\0')
	{
		if(line[i]==a)
		{
			line[i]=b;
		}
		i++;
	}
}
int main()
{
	//thay chu
	//khai bao bien 
	char line[101];
	char a,b;
	//nhap du lieu 
	printf("Nhap vao chuoi: ");
	fgets(line,100,stdin);
	line[strlen(line)-1]='\0';
	fflush(stdin);
	printf("Nhap vao chu muon thay: ");
	scanf("%c", &a);
	fflush(stdin);
	printf("Nhap vao chu thay: ");
	scanf("%c", &b);
	//goi ham va dien dap an
	doichu(line,a,b);
	printf("Chuoi sau thay la: %s \n", line);
	
}
