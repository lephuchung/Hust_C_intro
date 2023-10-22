#include <stdio.h>

int main(){
	FILE *fp;
	int n =0;
	int index =1;
	fp =fopen("fb2.dat","rb");
	if(fp ==NULL){
		perror("Loi doc file\n");
		return 1;
	}
	fseek(fp,index *sizeof(int),SEEK_SET);
	//fread(&n, sizeof(int), 1, fp);
	fread(&n,1,sizeof(int),fp);
	printf("Gia tri vua doc: %d\n",n);
	fclose(fp);
	return 0;
}
