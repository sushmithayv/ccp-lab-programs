#include<stdio.h>
void time(int h,int m)
{
int min;
min=(h*60)+m;
printf("Time in minutes is %d\n",min);
}
int main()
{
int h,m;
printf("Enter time\n");
scanf("%d %d",&h,&m);
printf("Time is %d:%d\n",h,m);
time(h,m);
return 0;
}
