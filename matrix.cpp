#include <stdio.h>
int main()
{
    int i, j, n, t , a[101][101],d,x,y,u;
    long gt;
    scanf ("%d",&u);
    while(u--)
    {
        gt=1;t=1;
        scanf ("%d%d%d", &n,&x,&y);
        d = n;
        while(gt <= n*n)
        {
            for(i=t; i<=d; i++) 
            {
                    a[t][i] = gt;
                    gt++;
            }
            for(i=t+1; i<=d; i++)
            {
                    a[i][d] = gt;
                    gt++;
            }
            for(i=d-1; i>=t; i--) 
            {
                a[d][i] = gt;
                gt++;
            }
            for(i=d-1; i>=t+1; i--) 
            {
                a[i][t] = gt;
                gt++;
            }
            t++; 
            d--; 
        }
        printf ("%d\n",a[x][y]) ;
    }
 
}
