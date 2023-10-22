#include <stdio.h>

int main()
{
	float grade , sum = 0.0;
	int gradeCount = 0;
	printf("Enter grade : ");
	scanf("%g", &grade);
	while(grade >= 0.0) 
	{
		sum+=grade;
		++gradeCount;
		printf("Enter grade: ");
		scanf("%g", & grade );
	}
	printf("Average: %g\n", sum/gradeCount);
	return 0;
}
