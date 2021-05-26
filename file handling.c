#include <stdio.h>

int main ()
{
  FILE * fptr;
  int i,n;
  char str[100];
  char str1;
     
     fptr = fopen("C:text.txt","a");

	
    printf(" Input how many  lines to be apeded : ");
    scanf("%d", &n);
     
    for(i = 0; i < n+1;i++)
    {
    fgets(str, sizeof str, stdin);
    fputs(str, fptr);
  }
  fclose (fptr);
	while (str1 != EOF)
		{
			printf ("%c", str1);
			str1 = fgetc(fptr);
		}
    printf("\n\n");
    fclose (fptr);
//------- End of reading ------------------
  return 0;
}
    