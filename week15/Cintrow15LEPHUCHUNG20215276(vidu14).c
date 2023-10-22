#include <stdio.h>
#include <string.h>
typedef struct
{
	char Ten[300];
	long SBD;
	char Khoa[100];
	float Diem;
}SinhVien;

int main()
{	
	FILE *f1,*f2,*f3,*f4;
	SinhVien SV;
	SinhVien sv[100];
	int i,SBD,n,k;
	
	//Nhap thong tin cho file ThiSinh.Dat
	//Tao file CNTT.Dat
	f1 =fopen("ThiSinh.Dat","wb");
	i =1;
	do
	{
		printf("Thi sinh %d :\n",i);
		printf("  Ho Ten : ");
		fflush(stdin);
		fgets(SV.Ten,sizeof(SV.Ten),stdin);
		n = strlen(SV.Ten) -1;
		SV.Ten[n]='\0'; // B? ký t? xu?ng dòng
		if(strcmp(SV.Ten,"***")==0)		break;
		printf("  So Bao Danh: ");
		scanf("%d",&SV.SBD);
		printf("  Khoa : ");
		fflush(stdin);
		fgets(SV.Khoa,sizeof(SV.Khoa),stdin);
		k = strlen(SV.Khoa) -1;
		SV.Khoa[k]='0';
		// B? ký t? xu?ng dòng
		printf("  Diem : ");
		scanf("%f",&SV.Diem);
		fwrite(&SV,sizeof(SinhVien),1,f1);
		i++;
	}
	while(1);
	fclose(f1);
	
	printf("\n\n DANH SACH BAN DAU \n");
	f1 =fopen("ThiSinh.Dat","rb");
	i =0;
	while(fread(&SV,sizeof(SinhVien),1,f1)>0)	printf("%-3d %-5d %-20s %-20s %-5.1f\n",++i,SV.SBD,SV.Ten,SV.Khoa,SV.Diem);
	printf("\n\n Thi Sinh thi CNTT tren 21.0\n");
	i =0;
	rewind(f1);
	while(fread(&SV,sizeof(SinhVien),1,f1)>0)	if(strcmp(SV.Khoa,"CNTT")==0&&SV.Diem >21.0)
	printf("%-3d %-5d %-20s  %-5.1f\n",++i,SV.SBD,SV.Ten,SV.Diem);
	
	printf("\n\n Tao file CNTT.Dat\n");
	i =0;
	rewind(f1);
	f2 =fopen("CNTT.Dat","wb");
	while(fread(&SV,sizeof(SinhVien),1,f1)>0)	if(strcmp(SV.Khoa,"CNTT")==0)
	fwrite(&SV,sizeof(SinhVien),1,f2);
	fclose(f2);
	f2 =fopen("CNTT.Dat","rb");
	//doc lai file
	while(fread(&SV,sizeof(SinhVien),1,f2)>0)	printf("%-3d %-5d %-20s  %-5.1f\n",++i,SV.SBD,SV.Ten,SV.Diem);
	fclose(f2);
	
	int j;
	for (i = 0; i < n - 1; i++) 
	{
		for (j = i + 1; j < n; j++) 
		{
			if (sv[i].Diem < sv[j].Diem) 
			{
				SinhVien tmp = sv[i];
				sv[i] = sv[j];
				sv[j] = tmp; 
			}
		}
	}
	f3 = fopen("CNTT_sapxeptheodiemthi.dat", "wb");
	fwrite(sv, sizeof(SinhVien), n, f3);
	fclose(f3);
	f4 = fopen("CNTT_sapxeptheodiemthi.txt", "w+");
	printf("Sinh vien CNTT sap xep theo diem giam dan: \n");
	for (i = 0; i < n; i++) 
	{
		printf("%-3d %-5d %-20s %-5.1f\n", i + 1, sv[i].SBD, sv[i].Ten, sv[i].Diem);
		fprintf(f4, "%-3d %-5d %-20s %-5.1f\n", i + 1, sv[i].SBD, sv[i].Ten, sv[i].Diem);
	}
	fclose(f4);

	printf("\n\nTim Sinh Vien\n");
	printf(" So Bao Danh ");
	scanf("%d",&SBD);
	rewind(f1);
	while(fread(&SV,sizeof(SinhVien),1,f1))	if(SV.SBD ==SBD)
	{
		printf("Tim thay sinh vien %s",SV.Ten);
		break;
	}
	if(feof(f1))	printf("Khong thay");
	fclose(f1);

	return 0;
}
