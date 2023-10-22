#include <stdio.h>
int main(){
	FILE *fp;
	int n =10;
	int index =1;
	fp =fopen("fb2.dat","r+b");
	if(fp ==NULL){
		perror("Khong mo duoc file\n");
		return 1;
	}
	fseek(fp,index *sizeof(int),SEEK_SET);
	fwrite(&n,1,sizeof(int),fp);
	fclose(fp);
	return 0;
}
