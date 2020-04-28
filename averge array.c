# include <stdio.h>
int  main( )
{
int  a[25], n, i ;
float  avg = 0, sum = 0 ;
printf(" Enter the Numbers of terms: ") ;
scanf("%d",&n) ;
printf("\n Enter the Numbers : \n") ;
for (i=0;i<n;i++)
{
scanf("%d",&a[i]) ;
}
for (i=0;i<n;i++)
{
sum = sum + a[i] ;
avg = sum / n ;}
printf("\n Average of entered Numbers are : %.2f ",avg) ;
return ( 0 ) ;
}
