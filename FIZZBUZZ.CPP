#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
for(i=1;i<=100;i++)
{
if(((i%3)||(i%5))==0)
printf("Number=%d FIZZBUZZ\n",i);
else if((i%3)==0)
printf("Number=%d FIZZ\n",i);
else if((i%5)==0)
printf("Number=%d BUZZ\n",i);
else
printf("Number=%d\n",i);
}
getch();
}