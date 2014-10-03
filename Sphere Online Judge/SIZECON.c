#include<stdio.h>
int main(){ 
int t; 
scanf("%d",&t); 
int i,a,sum=0; 
for(i=0;i<t;i++) { 
scanf("%d",&a); 
if(a>0)sum+=a; 
} 
printf("%d",sum); 
return 0; 
} 

/*
python

c=0
i=input
exec('b=i();c+=b*(b>0);'*i())
print c
*/
