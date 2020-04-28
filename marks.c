#include<stdio.h>

int main()
{
int i , j, r , c , n , a[100][100],max[100];
printf("Enter the number of subjects\n");
scanf("%d",&r);
printf("Enter the number of students\n");
scanf("%d",&c);
printf("Enter the elements of the array- \n");
for(i = 0; i < r; i=i+1)
{
for(j = 0; j < c; j=j+1)
{
printf("[%d %d]: ",i+1,j+1);
scanf("%d",&a[i][j]);
}
}
printf("The input matrix is:- \n");
for(i = 0; i < r; i++)
{
for(j = 0; j < c; j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
for(i = 0; i < r; i++)
{
max[i] = a[i][j];
for(j = 0; j < c ; j++)
{
if(a[i][j]>max[i])
{
max[i]=a[i][j];
}
}

}
for(i = 0; i < r; i++)
{
printf("Highest marks in subject %d is %d\n",i+1,max[i]);
}
return 0;
}
