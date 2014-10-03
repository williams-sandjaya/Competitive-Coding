#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
long long test=0,rr,rsc,rp,rl,rsp,sr,ssc,sp,sl,ssp;double rwin,swin,tie,p,answer;
scanf("%lld",&test);

    while(test--)
    {
                 scanf("%lld%lld%lld%lld%lld%lld%lld%lld%lld%lld",&rr,&rsc,&rp,&rl,&rsp,&sr,&ssc,&sp,&sl,&ssp);
                 rwin=(double)(rr*(sl+ssc)+rsc*(sp+sl)+rp*(sr+ssp)+rl*(ssp+sp)+rsp*(ssc+sr))/10000.0;
                 tie=(double)(rr*(sr)+rsc*(ssc)+rp*(sp)+rl*(sl)+rsp*(ssp))/10000.0;
                 swin=(double)(1.0-rwin-tie);
                 if (tie==1.0) 
                 {
                    printf("0\n");
                    continue;
                 }
                 
                 p=rwin/(1.0-tie);
                 answer=(p*p + 2*(1.0-p)*p*p)*100;
                 
                 if(float(answer-int(answer))>.5)
                 printf("%d\n",(int)(answer)+1);
                 else 
                 printf("%d\n",(int)(answer));
    }

system("pause");
return 0;
}
