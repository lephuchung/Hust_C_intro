#include <stdio.h>

int main(void)
{
	int a[3] = {17,289,4913};
	int *p, *q;
	p = a;
	/* p points to the beginning of a, that is &a[0] */
	q = p+2;
	/* q points to a[2]. Equivalent to q = &a[2]     */
	printf("a is %p\n", a);
	printf("p is %p, q is %p\n", p, q);
	printf("p points to %d and q points to %d\n", *p, *q);
	printf("The pointer distance between p and q is %d\n", q-p);
	printf("The integer distance between p and q is %d\n",(int)q-(int)p);
	return 0;
	//p=a la dia chi cua bit nho dau tien cua mang a 
	//q la dia chi cua bit nho dau tien cua a[2] vi q=p+2=a+2=a[2]
	//a[0] co 4 bit nho la cc cd ce cf
	//a[1] co 4 bit nho la d0 d1 d2 d3
	//a[2] co 4 bit nho la d4 d5 d6 d7
	//intq-intp=8 vi d4-cc=8
}
