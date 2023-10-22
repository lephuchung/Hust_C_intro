#include <stdio.h>
int DigitAllSame(int n)
{ 
	int digit;
	int count =0;
	int flagEven, flagOdd;
	flagEven=1; flagOdd=1;
	while (n>0 && count<5)
	{
		digit = n%10;
		n= n/10;
		count++;
		if (digit%2 == 0) 
		{
			flagEven= flagEven*1;
			flagOdd= flagOdd*0;
		}
		else 
		{
			flagEven= flagEven*0;
			flagOdd= flagOdd*1;
		}
	}
	printf("count = %d\n", count);
	if (count>=5) return -1;
	if (flagEven || flagOdd) return 1;
	else return 0;
}
int main()
{
	printf("Hello.\n");
	printf("So %d co gia tri ham la %d\n", 44668, DigitAllSame(46668));
	return 0;	
}
