#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
int n,a[11111],b[11111],c[11111],d[11111],p=0,q=0,m=0,i,j;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
    {
		scanf("%d",&a[i]);
		if(a[i]<0)b[p++]=a[i];
		if(a[i]==0)d[m++]=a[i];
		if(a[i]>0)c[q++]=a[i];
	}
	
	
	if(p>0 && q>0)
	{
	printf("1 ");
	printf("%d ",b[0]);
	
	printf("\n");
	printf("1 ");
	printf("%d ",c[0]);
	
	printf("\n");
	printf("%d ",m+q+p-2);
	for(i=0;i<m;i++)
	printf("%d ",d[i]);
	for(i=1;i<p;i++)
	printf("%d ",b[i]);
	for(i=1;i<q;i++)
	printf("%d ",c[i]);
	
	return 0;
    }
    
    if(p>0 && q==0)
	{
          // if(p==1)
           
          // if(p==2)
           
           if(p==3)
           {
                    printf("1 ");
                	printf("%d ",b[0]);
                	
                	printf("\n");
                	printf("2 ");
                	printf("%d %d ",b[1],b[2]);
                	
                	printf("\n");
                	printf("%d ",m+q+p-3);
                	for(i=0;i<m;i++)
                	printf("%d ",d[i]);
                	
                	return 0;              
           }
           
           if(p>=4)
           {
                    printf("1 ");
                	printf("%d ",b[0]);
                	
                	printf("\n");
                	printf("2 ");
                	printf("%d %d ",b[1],b[2]);
                	
                	printf("\n");
                	printf("%d ",m+q+p-3);
                	for(i=0;i<m;i++)
                	printf("%d ",d[i]);
                	for(i=3;i<n-1;i++)
                	printf("%d ",b[i]);
                	
                	return 0;
                   
           }
           
    }
	
	
	system("pause");
	

}
/*
neg -   3 
pos -   0 
*/
