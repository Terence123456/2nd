#include<stdio.h>

int main()
{
 int size=0;
 int marks[10],i,sum=0,total,p=size;
 printf("input size of marks");
 scanf("%d",&size);

 for(i=0;i<size;++i)
{
printf("enter elements %d:",i+1);
scanf("%d",&marks[i]);
sum+=marks[i];
}
total=sum+p;
printf("sum of all array elements is : %d",total);
      
     return 0;
}