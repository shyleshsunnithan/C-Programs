#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10
 
void main()
{
    int array[MAXSIZE];
    int i, num, power;
    float x, polySum;
 
    printf("Enter the order of the polynomial \n");
    scanf("%d", &num);
  
    printf("Enter %d coefficients \n", num + 1);
    for (i = 0; i <= num; i++)
    {
        scanf("%d", &array[i]);
    }
    
    power = num;
 
    printf("Given polynomial is: \n");
    for (i = 0; i <= num; i++)
    {
        if (power < 0)
        {
            break;
        }
        
        printf(" %dx^%d  ", abs(array[i]), power--);
	if (array[i] > 0)
            printf(" + ");
        else if (array[i] < 0)
            printf(" - ");
        else
            printf(" ");
    }
    
}