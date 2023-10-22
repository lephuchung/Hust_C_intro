#include <stdio.h>
void f(char **p)
{
	char *t;
	t = (p += sizeof(int))[-1];
	printf("%s\n", t);
}
int main()
{
	char *argv[] = { "ab", "cd", "ef", "gh", "ij","kl" };
	f(argv);
	return 0;
	//sizeof(int)=4
	//p+4=&p[4]
	//(p+4)[-1]=&p[3]
}

