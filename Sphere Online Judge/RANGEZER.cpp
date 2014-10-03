#include<cstdio>
#include<conio.h>
int cnt;
int main()
{
int a,b;
int t;
scanf("%d",&t);
while(t--){
scanf("%d%d",&a,&b);cnt=0;
for(int i=a;i<=b;i++)
{  int temp=i;
while(temp){
if(temp%10==0)cnt++ ;
 temp=temp/10;}
}

printf("%d\n",cnt);
}

getch();
return 0;
}
/*1...10    2digit
1..10 + 10        1   3digit
1...10 + 1...10 + 1..10                  2    4digit

1 402
*/
