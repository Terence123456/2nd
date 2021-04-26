#include <stdio.h>

int main()
{
    int num;

    printf("Enter any integer: ");
    scanf("%d", &num);

    switch (num > 0)
    {
        // Num is positive
        case 1:
            printf(" The integer is a positive number.", num);
        break;

        // Num is either negative or zero
        case 0:
            switch (num < 0)
            {
                case 1: 
                    printf(" The Integer is a negative integer .", num);
                    break;
                case 0:
                    printf("%d is zero.", num);
                    break;
            } 
        break;
    }

    return 0;
}