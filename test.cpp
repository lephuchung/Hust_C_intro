#include <stdio.h>
#include<string.h>
#define max(a,b) (((a)>(b))?(a):(b))
struct vdv
{
    int id;
    char nation[50];
    char name[50];
    double r1,r2,r3,fr;
};
int n;
struct vdv a[50];
char d[50];
int b;
int kt[10];
void nhap()
{
    printf("ID Nation Name R1 R2 R3 FR\n");
    for(int i=1;i<=n;i++)
    {

    }
}

int main()
{
    b=7;
    for(int i=1;i<=6;i++)
        kt[i]=0;
    printf("1 nhap thong tin truoc khi thi dau :");
    printf("\n2 in thong tin :");
    printf("\n3thi dau : ");
    printf("\n4tim kiem: ");
    printf("\n5 in ket qua:");
    printf("\n6 ket thuc");
    while(b!=6)
        {

        printf("\nnhap yeu cau: ");
        scanf("%d",&b);
        if(b==1&&kt[1]==0)
        {
                printf("Nhap so luong van dong vien : ");
                scanf("%d",&n);
                for(int i=1;i<=n;i++)
                {
                    printf("\nnhap id : ");
                    scanf("%d",&a[i].id);
                    printf("\nnhap nation : ");
                    scanf("%s",a[i].nation);
                    getchar();
                    printf("nhap name: ");
                    gets(a[i].name);
                }
                kt[1]=1;
        }
            if(b==2)
            {
                printf("ID      Nation          Name            R1   R2  R3  FR\n");
                for(int i=1;i<=n;i++)
                {
                        printf("\n%d    %s          %s",a[i].id,a[i].nation,a[i].name);

                }
            }
            if(b==3&&kt[3]==0)
            {
                kt[3]=1;
                printf("\nnhap diem van dong vien lan 1: ");
                for(int i=1;i<=n;i++)
                {
                    scanf("%lf",&a[i].r1);
                }
                printf("ID      Nation      Name            R1   R2  R3  FR\n");
                for(int i=1;i<=n;i++)
                {

                        printf("\n%d    %s      %s         %0.2lf",a[i].id,a[i].nation,a[i].name,a[i].r1);

                }
                printf("\nnhap diem van dong vien lan 2: ");
                for(int i=1;i<=n;i++)
                {
                    scanf("%lf",&a[i].r2);
                }
                printf("ID      Nation          Name            R1   R2  R3  FR\n");
                for(int i=1;i<=n;i++)
                {
                        printf("\n%d  %s      %s   %0.2lf  %0.2lf",a[i].id,a[i].nation,a[i].name,a[i].r1,a[i].r2);
                }
                printf("\nnhap diem van dong vien lan 3: ");
                for(int i=1;i<=n;i++)
                {
                    scanf("%lf",&a[i].r3);
                    a[i].fr=max(max(a[i].r1,a[i].r2),a[i].r3);
                }
                 printf("ID      Nation          Name           R1   R2  R3  FR\n");
                for(int i=1;i<=n;i++)
                    {
                        printf("\n%d  %s      %s   %0.2lf  %0.2lf  %0.2lf  %0.2lf",a[i].id,a[i].nation,a[i].name,a[i].r1,a[i].r2,a[i].r3,a[i].fr);
                    }
            }
            if(b==4&&kt[3]==1)
            {
                char s[50];
                printf("tim ten :");
                getchar();
                gets(s);
                for(int i=1;i<=n;i++)
                {
                    if(strcmp(a[i].name,s)==0)
                    {
                        printf("\n%d  %s      %s   %0.2lf  %0.2lf  %0.2lf %0.2lf",a[i].id,a[i].nation,a[i].name,a[i].r1,a[i].r2,a[i].r3,a[i].fr);
                    }
                }
                printf("\ntim quoc gia :");
                getchar();
                gets(s);
                for(int i=1;i<=n;i++)
                {
                    if(strcmp(a[i].nation,s)==0)
                    {
                        printf("\n%d  %s      %s   %0.2lf  %0.2lf  %0.2lf %0.2lf",a[i].id,a[i].nation,a[i].name,a[i].r1,a[i].r2,a[i].r3,a[i].fr);
                    }
                }
            }
            if(b==5&&kt[3]==1)
            {
                for(int i=1;i<=n;i++)
                    for(int j=1;j<=n;j++)
                {
                    if(a[i].fr>a[j].fr )
                    {
                        struct vdv tg;
                        tg=a[i];
                        a[i]=a[j];
                        a[j]=tg;
                    }
                }
                for(int i=1;i<=n;i++)
                {

                        printf("\n%d  %s      %s   %0.2lf  %0.2lf  %0.2lf %0.2lf",a[i].id,a[i].nation,a[i].name,a[i].r1,a[i].r2,a[i].r3,a[i].fr);
                }
            }
        }

}

