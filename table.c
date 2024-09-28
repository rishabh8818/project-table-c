#include<stdio.h>
int main()
{
int n;
printf(" enter the number of which you want to print the table  : ");
scanf("%d",&n);
int i=1;
while(i<=10){
printf(" %d x %d = %d \n",n,i,n*i);
i++ ;
}
return 0;

}
