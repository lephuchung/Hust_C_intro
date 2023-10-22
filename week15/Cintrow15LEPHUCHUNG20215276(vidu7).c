#include <stdio.h>
int main(){
	FILE *fp;
	int buffer[3];
	int i;
	fp =fopen("file_nhi_phan_2.dat","rb");
	fread(buffer,3,sizeof(int),fp);
	for(i=0;i<3;i++){
		printf("\nPhan tu thu %d : %d",i,buffer[i]);
	}
	fclose(fp);
}
