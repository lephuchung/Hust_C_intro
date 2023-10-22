#include <stdio.h>

int main(){
	FILE *fInput,*fOutput;
	fInput = fopen("hello.txt","r");
	char ch;
	int demKyTuThuong = 0,demKyTuHoa = 0;
	ch = fgetc(fInput);
	while(ch != EOF){
		printf("ch: %c %d\n",ch,ch);
		if((ch >= 'a')&&(ch <= 'z'))
			demKyTuThuong +=1 ;
		if(isalpha(ch)&&isupper(ch))
			demKyTuHoa += 1;
		ch = fgetc(fInput);
		if(ch ==EOF){
			printf("Ma EOF: %d\n",ch);
		}
	}
	fclose(fInput);
	printf("Tong so ky tu chu cai thuong: %d\n",demKyTuThuong);
	printf("Tong so ky tu chu cai hoa: %d\n",demKyTuHoa);
}
