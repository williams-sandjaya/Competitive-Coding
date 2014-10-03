#include<stdio.h>
int main()
{int g,b;
    while(1)
    {
            scanf("%d %d",&g,&b);
            if((g==-1)&&(b==-1))break;
            if((g==b)&&(g!=0)){printf("1\n");continue;}
            if((g==0)&&(b==0)){printf("0\n");continue;}
            if((g==0)){printf("%d\n",b);continue;}
            if(b==0){printf("%d\n",g);continue;}
            if(g>b)
            {
                   if(g%(b+1)==0)
                   printf("%d\n",g/(b+1));
                   else
                   printf("%d\n",(g/(b+1))+1);
                   }
            else
            {
               if(b%(g+1)==0)
                   printf("%d\n",b/(g+1));
                   else
                   printf("%d\n",(b/(g+1))+1);
                   } 
                   }
                   return 0;
                   }
