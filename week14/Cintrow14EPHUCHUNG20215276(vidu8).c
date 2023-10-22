#include <stdio.h>

typedef struct date{
	unsigned char day;
	unsigned char month;
	unsigned char year;
} date_t;
date_t input_date(){
	date_t tmp;
	do{
		printf("The day (between 1 and 31):");
		scanf("%u",&tmp.day);
	}
	while((tmp.day <1)||(tmp.day >31));
	do{
		printf("The month (between 1 and 12):");
		scanf("%u",&tmp.month);
	}
	while((tmp.month <1)||(tmp.month >12));
	do{
		printf("The year (between 1 and 10000):");
		scanf("%d",&tmp.year);
	}
	while((tmp.year <1)||(tmp.year >10000)); 
	return tmp;
}
int datecmp(date_t d1,date_t d2){
	if(d1.year <d2.year) return-1;
	else if(d1.year >d2.year) return 1;
	else{
		if(d1.month <d2.month) return-1;
		else if(d1.month >d2.month) return 1; 
		else{
			if(d1.day <d2.day) return-1;
			else if(d1.day >d2.day) return 1;
			else return 0;
		}
	}
}
int main(){
	date_t date1,date2;
	int m;
	printf("Enter the first date.\n");
	date1 = input_date();
	printf("Enter the second date.\n");
	date2 = input_date();
	m = datecmp(date1,date2);
	if(m==0) printf("Two date are identical.\n");
	else if(m<0)printf("%d/%d/%d is before %d/%d/%d\n",date1.day,date1.month,date1.year,date2.day,date2.month,date2.year);
	else printf("%d/%d/%d is after %d/%d/%d\n",date1.day,date1.month,date1.year,date2.day,date2.month,date2.year);
	return 0;
}
