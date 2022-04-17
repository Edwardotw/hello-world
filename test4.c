#include "stdio.h"

/*Êä³ö9*9³Ë·¨¿Ú¾÷*/

void main(void)
{
    int i,j,k;
    for(i=1;i<10;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d*%d=%d  ",j,i,i*j);

        }
        printf("\r\n");
    }
}

