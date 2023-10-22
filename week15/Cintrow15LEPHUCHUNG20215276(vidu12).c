#include <stdio.h>
	
int main(){
	FILE *f =fopen("SoNguyen.Dat","wb");
	int i,n;
	for(i =0;i <100;i++){
		n =2*i+1;
		fwrite(&n,sizeof(int),1,f);
	}
	fclose(f);
	return 0;
}
