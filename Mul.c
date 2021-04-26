#include<stdio.h>

int main()
{
float a,b, ADD,MUL,DIV,SUB;
  
     printf("inter 2 integers");
    scanf("%f",&a);
    scanf("%f",&b);
    
   ADD = a+b;
    printf("ADD= %d\n",ADD);
   MUL = a*b;
    printf("MUL=%.f\n",MUL);
   DIV = a/b;
    printf("DIV=%.1f\n",DIV);
    SUB = a-b;
    printf("SUB=%.f\n",SUB);
    
    
    return 0;
}