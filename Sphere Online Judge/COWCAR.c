#include<stdio.h>
int main()
{
    long N,M,D,L,i,sub,count,ans;
    scanf("%ld %ld %ld %ld",&N,&M,&D,&L);
    long cows[N];
    for(i=0;i<N;i++)
    scanf("%ld",&cows[i]);
    
    bubblesort(&cows[0],N);
    
    sub=0;ans=0;
    count=0;
    
    for(i=0;i<N;i++)
    {
        if(count==M)
       {
            count=0;
            sub++;
        }
       long temp=cows[i]-sub*D;
        if(temp>=L)
        {
            count++;
            ans++;
        }
        
    }
    printf("%ld",ans);
   system("pause");
}    

int bubblesort(long *array,long n)
        {
            long temp;
            long i,j;
            
            
            for (j=0;j<n;j++)
            {
                for (i=0;i<n-j;i++)
            {
                
                if((*(array+i)) > (*(array+i+1)))
            {
                 temp=*(array+i);
                 *(array+i)= *(array+i+1);
                 *(array+i+1)=temp;
                 
                 }
                 
                
                }
                
                }

            }



