#include "stdio.h"

/*һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�*/

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
