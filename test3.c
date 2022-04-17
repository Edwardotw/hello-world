#include "stdio.h"

/*一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？*/

void main(void)
{
    int x,y;
    int n;
    for(x=10;x<1000;x++)
    {
        for(y=13;y<1000;y++)
        {
            n=0;
            while(n<1000)
            {
                if(n+100==x*x && n+268==y*y)
                {
                    printf("%d %d %d\n",x,y,n);
                    break;
                }
                else
                {
                    n+=1;
                }
            }
        }
    }
}
