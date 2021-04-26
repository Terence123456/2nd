#include<stdio.h>

int main()
{int name[100];
int age;
   
    printf("name:");
    scanf("%s",name);
    printf("age:");
    scanf("%d",&age);
    
   

     
    if(age>=18)
    {
    
    printf("you are eligible for voting.");
    
    }
   else if (age==17)
    {
    
     printf("you are not eligible for voting.");
    
    }
    else 
    
    {
   
      printf("Invalid age, please try again!");
     
    }
    
    return 0;
}