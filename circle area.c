#include<stdio.h>
void area(int r)
{
int area;
area=3.14*r*r;
printf("the area of the circle is %d",area);
}
int main()
{
int r;
printf("the radius of the circle is\n");
scanf("%d",&r);
area(r);
return 0;
}
