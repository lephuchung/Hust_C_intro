#include <stdio.h>

int main(){
	FILE *input,*output;
	input = fopen("tmp.c","r");
	output = fopen("tmpCopy.c","w+");
	char ch;
	ch = fgetc(input );
	while(ch != EOF ){
		fputc(ch,output );
		ch = fgetc(input );
	}
	fclose(input);
	fclose(output);
}


