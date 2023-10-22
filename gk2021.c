#include<stdio.h>
#include<string.h>

typedef struct{
    char name[50];
    char nation[50];
    int Register[3];
    short pass[3];
    int final;
    char medal;
} athlete;
int n; athlete a[100];

void printMenu(){
    printf("\n\t\tMENU\n");
    printf("1. Nhap\n");
    printf("2. Tinh diem\n");
    printf("3. Sap xep theo diem\n");
    printf("4. Cap nhat lai thanh tich\n");
    printf("5. Thoat\n");
    printf("\n");
}
int chooseTask(){
    int task;
    do{
        printf("Moi ban chon chuc nang: ");
        scanf("%d",&task);
        getchar();
        if(task<0||task>5) printf("Nhap sai!\n");
    }while (task<0||task>5);
    return task;
}
void printTask(int task){
    printf("%-10s%-15s%-5s%-5s%-5s%-5s%-5s%-5s","Name","Nation","R1","R2","R3","P1","P2","P3");
    if(task>1)printf("%-8s","Final");
    if(task>2)printf("%-8s","Medal");
    printf("\n");
    for (int i=0;i<n;i++){
        printf("%-10s%-15s",a[i].name,a[i].nation);
        for (int j=0;j<3;j++) printf("%-5d",a[i].Register[j]);
        for (int j=0;j<3;j++) printf("%-5hd",a[i].pass[j]);
        if(task>1)printf("%-8d",a[i].final);
        if(task>2)printf("%-8c",a[i].medal);
        printf("\n");
    } 
}
void task1(){
    do{
        printf("Moi ban nhap so VDV: ");
        scanf("%d",&n);
        getchar();
        if(n<3||n>100) printf("Nhap sai!\n");
    }while (n<3||n>100);
    for (int i=0;i<n;i++){
        scanf("%s%s",a[i].name,a[i].nation);
        for (int j=0;j<3;j++) scanf("%d",&a[i].Register[j]);
        for (int j=0;j<3;j++) scanf("%hd",&a[i].pass[j]);
        getchar();
    }
    printf("\nDanh sach vua nhap:\n\n");
     
}
void task2(){
    int max;
    for (int i=0;i<n;i++){
        max=0;
        for (int j=0;j<3;j++)
            if(a[i].pass[j])
                max=(a[i].Register[j]>max)?a[i].Register[j]:max;
        a[i].final=max;
    }
}
char initMedal(int i){
    if (i==0) return 'G';
    if (i==1) return 'S';
    if (i==2) return 'B';
    return 'N';
}
void task3(){
    athlete tg;
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
        if (a[i].final<a[j].final){
            tg=a[i];        
            a[i]=a[j];      
            a[j]=tg;          
        }
    for (int i=0;i<n;i++) a[i].medal=initMedal(i);
}
void task4(){
    int t,temp;
    char name[50];
    do{
        printf("Nhap so truong hop pham quy: ");
        scanf("%d",&t);
        getchar();
    }while(t<0);
    for (int i=0;i<t;i++){
        scanf("%s%d",name,&temp);
        getchar();
        for (int j=0;j<n;j++) 
            if(strcmp(a[j].name,name)==0)a[j].pass[temp-1]=0;
    }
    task2();
    task3();
}
int main(){
    int task;
    while(1){
        printMenu();
        task=chooseTask();
        switch (task)
        {
        case 1: task1();
                printTask(1);
            break;
        case 2: task2();
                printTask(2);
            break;
        case 3: task3();
                printTask(3);
            break;
        case 4: task4();
                printTask(4);
            break;
        case 5: return 0;
            break;
        }
    }
}
/*
David Thailand 70 85 90 0 1 1
Hoang Vietnam 75 90 100 1 0 1
Lua Laos 80 85 90 1 1 0
*/