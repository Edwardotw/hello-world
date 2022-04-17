#include "stdio.h"

/*有1、2、3、4四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？*/

void main(void)
{
    int i,j,k,m;
    int s = 0;
    int S,N;
    int num[100][3] = {};
    for(i=1;i<5;i++)
    {
        for(j=1;j<5;j++)
        {
            for(k=1;k<5;k++)
            {
                num[s][0] = i;
                num[s][1] = j;
                num[s][2] = k;
                printf("%d,%d,%d\n",i,j,k);
                s = s + 1;
                printf("s=%d\n",s);
            }
        }
    }
    S = s;
    N = S;
    for(m=0;m<S;m++)
    {
        if(num[m][0] == num[m][1] || num[m][0] == num[m][2] || num[m][1] == num[m][2])
        {
            num[m][0] = 0;
            N = N - 1;
        }
    }

    printf("There are %d numbers and they are\n",N);
    for(m=0;m<S;m++)
    {
        if(num[m][0] != 0)
        printf("%d%d%d\n",num[m][0],num[m][1],num[m][2]);
    }
}
/*
void main(void)
{
    int num[4] = {1,2,3,4};
    int i,j,k,n=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(j==i) continue;
            else
            {
                for(k=0;k<4;k++)
                {
                    if(k==j || k==i) continue;
                    else
                    {
                        n++;
                        printf("共有%d个数：",n);
                        printf("%d\r\n",num[i]*100+num[j]*10+num[k]);
                    }
                }
            }

        }
    }
}
*/
