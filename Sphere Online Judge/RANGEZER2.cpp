#include<cstdio>
#include<conio.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
int a,b;int length1,length2,i;
int t;
scanf("%d",&t);
while(t--){
           int sum1=0;int sum2=0;
           int firstno[10],secondno[10];
           length1=0,length2=0;
scanf("%d%d",&a,&b);
int t1,t2;
t1=a,t2=b;
while(a) a/=10,length1++;
while(b) b/=10,length2++;
for( i=0;i<length1;i++){
        firstno[i]=t1%10;
        t1/=10;
        }
for(i=0;i<length2;i++){
        secondno[i]=t2%10;
        t2/=10;
        } 
        
        
        for( i=1;i<length1;i++){
             
        sum1+=i*firstno[i]*(int)(pow(10,i-1));
        }  
        for( i=1;i<length2;i++){
        sum2+=i*secondno[i]*(int)(pow(10,i-1));
        } 
            
/*for( i=0;i<length1;i++){
        printf("%d",firstno[i]);
       
        }
        printf(" ");
        for( i=0;i<length2;i++){
        printf("%d",secondno[i]);*/
       printf("1 : %d 2: %d\n",sum1,sum2);
        }

}



