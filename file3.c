#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("INPUT\n");
scanf("%d %d %d",&a,&b,&c");
if((a>b)&&(a>c))
{
printf("%d",a);
}
else if(b>c)
{
printf("%d",b);
}
else
{
printf("%d",c);
}
getch();
}
