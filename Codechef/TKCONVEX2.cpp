#include<stdio.h>
#include<stdlib.h>
#include<list>
using namespace std;
 
struct number
{
    int no,key;
}arr[1001];
 
 list < int >::iterator it;
 
typedef int (*compfn)(const void*, const void*);
 
int compare(struct number *elem1, struct number *elem2)
{
   if ( elem1->no < elem2->no)
      return -1;
 
   else if (elem1->no > elem2->no)
      return 1;
 
   else
      return 0;
}
 
int something(int x,int ka,int sum1,int sum2)
{
    printf("Something\n");
    int z,y,i,j,k,arr2[9][127],arr3[9][127],par2[9][127],par3[9][127],val2[9][127],val3[9][127];
    arr2[0][1]=arr[x].no;
    arr2[0][2]=arr[x+1].no;
    arr2[1][1]=arr[x].no+arr[x+1].no;
    
    par2[0][1]=0;
    par2[0][2]=0;
    par2[1][1]=1;
    
    val2[0][1]=arr[x].key;
    val2[0][2]=arr[x+1].key;
    val2[1][1]=arr[x+1].key;
    
    arr2[0][0]=2;
    arr2[1][0]=1;
    
    for(i=2;i<ka-1;i++)
    {
        arr2[0][i+1]=arr[i+x].no;
        z=i+1;
        for(j=1;j<=i;j++)
        {
           for(k=1;k<=arr2[j-1][0];k++)
           {
               arr2[j][k+arr2[j][0]]=arr[i+1].no+arr2[j-1][k];
               val2[j][k+arr2[j][0]]=arr[i+1].key;
               par2[j][k+arr2[j][0]]=k;
           }
           y=arr2[j][0]+arr2[j-1][0];
           arr2[j-1][0]=z;
           z=y;
        }
        arr2[i][0]=1;
    }
    
    x+=ka;
    arr3[0][1]=arr[x].no;
    arr3[0][2]=arr[x+1].no;
    arr3[1][1]=arr[x].no+arr[x+1].no;
    
    par3[0][1]=0;
    par3[0][2]=0;
    par3[1][1]=1;
    
    val3[0][1]=arr[x].key;
    val3[0][2]=arr[x+1].key;
    val3[1][1]=arr[x+1].key;
    
    arr3[0][0]=2;
    arr3[1][0]=1;
    
    for(i=2;i<ka-1;i++)
    {
        arr3[0][i+1]=arr[i+x].no;
        z=i+1;
        for(j=1;j<=i;j++)
        {
           for(k=1;k<=arr3[j-1][0];k++)
           {
               arr3[j][k+arr3[j][0]]=arr[i+1].no+arr3[j-1][k];
               val3[j][k+arr3[j][0]]=arr[i+1].key;
               par3[j][k+arr3[j][0]]=k;
           }
           y=arr3[j][0]+arr3[j-1][0];
           arr3[j-1][0]=z;
           z=y;
        }
        arr3[i][0]=1;
    }
    
    list < int >l1,l2;
    for(i=0;i<ka-1;i++)
    {
        l1.push_back(arr[i+x].key);
        l2.push_back(arr[i+x+ka].key);
    }
    
    for(i=0;i<ka-1;i++)
    {
        for(j=1;j<=arr2[i][0];j++)
        {
            for(k=1;k<=arr2[1][0];k++)
            {
                if(arr3[i][k]-arr2[i][j]>=sum1&&arr3[i][k]-arr2[i][j]<=sum2)
                {
                        while(par2[i][j])
                        {
                            l1.remove(val2[i][j]);
                            l2.push_back(val2[i][j]);
                            l2.remove(val3[i][k]);
                            l1.push_back(val3[i][k]);
                            i--;
                            j=par2[i][j];
                        }
                        printf("Yes\n");
                        for(it=l1.begin();it!=l1.end();it++)
                        printf("%d ",*it);
                        for(it=l2.begin();it!=l2.end();it++)
                        printf("%d ",*it);
                        return 1;
                }
            }
        }   
    }
    return 0;
    
}
 
int check(int x,int k)
{
    int sum=0,sum2=0,i;
    for(i=0;i<k-1;i++)
    sum+=arr[i+x].no;
    
    for(i=0;i<k-1;i++)
    sum2+=arr[i+x+k].no;
    
    if(sum>arr[x+k-1].no&&sum2>arr[x+2*k-1].no)
    {
        printf("Yes\n");
        for(i=0;i<2*k;i++)
        printf("%d ",arr[i+x].key);
        return 1;
    }
    
    if(sum<arr[x+k-1].no&&sum2<arr[x+2*k-1].no)
    {
        return 0;
    }
 
    if(sum<arr[x+k-1].no&&sum2>arr[x+2*k-1].no)
    {
        if(sum2-arr[x+2*k-1].no-1>arr[x+k-1].no-sum+1)
        {
            return something(x,k,arr[x+k-1].no-sum+1,sum2-arr[x+2*k-1].no-1);
        }
    }
    return 0;
}
 
int main()
{
    int i,n,k,flag;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i].no);
        arr[i].key=i+1;
    }
    
    qsort((void*)&arr,n,sizeof(struct number),(compfn)compare);
    
    for(i=0;i<=n-2*k;i++)
    {
        flag=check(i,k);
        if(flag==1)
        goto xy;
    }
    
    printf("No");
    xy:
    return 0;
}
