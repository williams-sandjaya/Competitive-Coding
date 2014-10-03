#include<stdio.h>

int main()
{
    short t;
    scanf("%hd",&t);
    while(t--)
    {
        int n,i,j,k;
        scanf("%d",&n);

        char map[n][n];
        for(i=0;i<n;i++)
            scanf("%s",&map[i]);

        int a[n][n];
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            {
                if(map[i][j]=='N')
                    a[i][j]=999;
                else
                    a[i][j]=1;
            }

        for(k=0;k<n;k++)
            for(i=0;i<n;i++)
                for(j=0;j<n;j++)
                    if(a[i][j] > a[i][k]+a[k][j])
                        a[i][j]=a[i][k]+a[k][j];

        int q;
        scanf("%d",&q);
        while(q--)
        {
            int c1,c2;
            scanf("%d%d",&c1,&c2);
            if(c1==c2)
                printf("0\n");
            else
                printf("%d\n",a[c1][c2]);
        }
    }
return 0;
}
