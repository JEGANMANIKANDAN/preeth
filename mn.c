#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    int f1=-1,f2=1,f3;
    clrscr();
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        f3=f1+f2;
        printf("%d",f3);
        f1=f2;
        f2=f3;
    }
}
getch();
}
