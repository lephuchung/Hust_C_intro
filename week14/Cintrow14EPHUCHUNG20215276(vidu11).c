#include <stdio.h>
#define MAX 100

typedef struct 
{
	int numerator;
	int denominator;
} fraction;

void fractionInput(fraction *ps);
void fractionOutput(fraction ps);
void fractionArrayInput(fraction dsps[], int n);
void fractionArrayOutput(fraction dsps[], int n);
int fractionCmp(fraction ps1, fraction ps2);
fraction inverse(fraction ps);
void inverseArray(fraction dsps[], int n);

void fractionInput(fraction *ps)
{
	int n,d;
	printf("Numerator:"); 
	scanf("%d",&n);
	ps->numerator = n;
	do 
	{
		printf("Denominator:"); 
		scanf("%d",&d);
	} while (d==0);
	ps->denominator = d;
}

void fractionArrayInput(fraction dsps[], int n)
{
	int i;
	for (i=0; i<n; i++)
	{
		printf("Data input for the %d-th fraction:\n",i+1);
		fractionInput(&dsps[i]);
	}
}

void fractionOutput(fraction ps)
{
	printf(" %d/%d ", ps.numerator, ps.denominator);
}

void fractionArrayOutput(fraction dsps[], int n)
{	
	int i;
	printf("Data output for the array of fraction:\n");
	for (i=0; i<n; i++)
	{
		fractionOutput(dsps[i]);
	}
	printf("\n");
}

fraction inverse(fraction ps)
{
	fraction tmp;
	if (ps.numerator == 0) 
	{
		printf("Can not have an inverse fraction of 0!\n");
		exit(1);
	}
	tmp.numerator = ps.denominator;
	tmp.denominator = ps.numerator;
	return tmp;
}

int fractionCmp(fraction ps1, fraction ps2)
{
	long smd = (ps1.numerator * ps2.denominator - ps2.numerator * ps1.denominator) * ps1.denominator * ps2.denominator;
	if(smd > 0) return 1;
	else if (smd < 0) return -1;
	else return 0;
}

void inverseArray(fraction dsps[], int n)
{
	int i;
	for(i=0; i<n; i++) 
	{
		dsps[i]= inverse(dsps[i]);
	}
}

fraction reduceFraction(fraction x)
{
	fraction rs;
	int i;
	for (i=x.numerator;i>=1;i--)
	{
		if ((x.numerator) % i == 0 && (x.denominator) % i == 0)
		{
			rs.numerator = x.numerator / i;
			rs.denominator = x.denominator / i; 
			break; 
		}
	} 
	return rs; 
} 

void reduceArray(fraction x[], float n)
	{ 
	int i; 
	for(i=0;i<n;i++)
	{
		x[i]= reduceFraction(x[i]);
	}  
}

void sum(fraction a,fraction b)
{
	fraction s;
	s.numerator = a.numerator * b.denominator + b.numerator * a.denominator;
	s.denominator = a.denominator * b.denominator;
	s = reduceFraction(s);
	printf("%d/%d",s.numerator,s.denominator); 
} 

void product(fraction a,fraction b)
{
	fraction p;
	p.numerator = a.numerator * b.numerator;
	p.denominator = a.denominator * b.denominator;
	p = reduceFraction(p); 
	printf("%d/%d",p.numerator,p.denominator); 
} 

void sort(fraction x[],int n)
{
	int i,j;
	fraction r; 
	for (i=0;i<n;i++)
	{
		for (j=i;j<n;j++)
		{
			if(x[i].numerator*x[j].denominator-x[j].numerator*x[i].denominator>0)
			{
				r = x[i];
				x[i] = x[j];
				x[j] = r; 
			} 
		} 
	} 
} 

int main()
{
	int i,n;
	fraction a[MAX], max, s, p;
	printf("Enter the number of fractions:");
	scanf("%d", &n);
	fractionArrayInput(a,n);
	printf("\n"); 
	fractionArrayOutput(a,n);
	
	fraction u[MAX];
	for (i=0;i<n;i++)
	{
		u[i]=a[i];
	}
	printf("\nInverse all fractions in the array.\n");
	inverseArray(u, n);
	fractionArrayOutput(u, n);
	
	fraction v[MAX];
	for (i=0;i<n;i++)
	{
		v[i]=a[i];
	}
	printf("\nReduce all fractions in the array.\n");
	reduceArray(v,n);
	fractionArrayOutput(v,n);
	
	fraction x[MAX];
	for (i=0;i<n;i++)
	{
		x[i]=a[i];
	}
	printf("\nSort all fractions in the array.\n");
	sort(x,n); 
	fractionArrayOutput(x, n);

	printf("\nEnter first fraction to compare:\n");
	fractionInput(&s);
	printf("Enter second fraction to compare:\n");
	fractionInput(&p);
	if (fractionCmp(s,p) == 0)
	printf("Two fractions are equals.\n");
	else if (fractionCmp(s,p) < 0)
	{
		fractionOutput(s);
		printf("is smaller than");
		fractionOutput(p);
		printf("\n");
	}
	else
	{
		fractionOutput(s);
		printf("is greater than");
		fractionOutput(p);
		printf("\n");
	} 	
	
	printf("\nEnter first fraction:\n");
	fractionInput(&s);
	printf("Enter second fraction:\n");
	fractionInput(&p);
	printf("Sum of 2 fractions: ");
	sum(s,p);
	printf("\nProduct of 2 fractions: ");
	product(s,p); 
	return 0;
}

