#include <stdio.h>

int main(){
	FILE *fp;
	int buffer[100];
	int i;
	fp =fopen("fb2.dat","rb");
	fseek(fp,0,SEEK_END);
	int filesize =ftell(fp);
	printf("Kich thuoc file: %d\n",filesize);
	int so_phan_tu =0;
	so_phan_tu =filesize /sizeof(int);
	printf("So phan tu trong file: %d\n",so_phan_tu);
	fseek(fp,0,SEEK_SET);
	fread(buffer,so_phan_tu,sizeof(int),fp);
	for(i =0;i <4;i++){
		printf("\n Phan tu thu %d: %d",i,buffer[i]);
	}
	fclose(fp);	
}

