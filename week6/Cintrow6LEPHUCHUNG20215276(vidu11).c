#include <stdio.h>

int main()
{
	char c;
	printf("Yes/No (Y/N)?");
	scanf("%c", &c);
	switch (c)
	{
		case 'y':
		case 'Y':
		{
			printf("say yes\n");
			break;
		}
		default:
		{
			printf("say no\n");
			break;
		}
	}
}
