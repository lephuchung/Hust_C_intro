#include <stdio.h>
#include <string.h>

int demcach(char line[])
{
	int i=0;
	int dem=0;
	while(line[i]!='\0')
	{
		if(line[i]==' ')
		{
			dem++;
		}
		i++;
	}
	return dem;
}
int main()
{
	//dem dau cach
	//khai bao bien
	char line[100];
	//nhap du lieu
	printf("Nhap vao chuoi: ");
	gets(line);
	//goi ham va dien dap an
	printf("Nhap vao so dau cach: %d", demcach(line));
}
