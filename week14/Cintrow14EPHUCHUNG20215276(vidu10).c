#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct {
	char id[6];
	char name[31];
	float grade;
	char classement;
} student;
void printStudent(student s)
{
	printf("%s | %s | %4.1f | %c\n", s.id, s.name,s.grade,s.classement);
}
int main(){
	int i, n, j;
	student std[MAX], tmp;
	printf("Enter the number of student (>0):");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		printf("ID:"); 
		fflush(stdin);
		fgets(std[i].id,6,stdin);
		std[i].id[strlen(std[i].id)-1]='\0';
		fflush(stdin);
		printf("name:"); 
		fgets(std[i].name,31,stdin);
		std[i].name[strlen(std[i].name)-1]='\0';
		fflush(stdin);
		printf("Grade:"); scanf("%f",&std[i].grade);
		if (std[i].grade >= 9 && std[i].grade <= 10) std[i].classement = 'A';
		else if (std[i].grade >= 8 && std[i].grade < 9) std[i].classement = 'B';
		else if (std[i].grade >= 6.5 && std[i].grade < 8) std[i].classement = 'C';
		else std[i].classement = 'D';
	}
	printf("ID | Name | Grade | Classment\n");
	for(i=0; i<n-1; i++)
	{
		for (j=i+1; j<n; j++)
		{
			if (std[i].grade < std[j].grade)
			{
				tmp = std[i];
				std[i] = std[j];
				std[j] = tmp;
			}
		}
		for(i=0; i<n; i++) printStudent(std[i]);
	}	
	return 0;
}
