#include<stdio.h>
int main()
{
    int t,cou,c,n,i;
    scanf("%d",&t);
    for(cou=0;cou<t;cou++)
    {
                    scanf("%d",&n);
                    if(n==1)
                    {
                            printf("poor conductor\n");
                            continue;}
                    c=n%10;
                    if((c==2)||(c==3)||(c==4)||(c==5)||(c==6))
                    {
                       i=((n-c)/5)+1;            
                                printf("%d ",i); }
                                
                                if(c==0)
                                {
                                         i=n/5;
                                         printf("%d ",i);
                                         }
                                         
                                         if(c==1)
                                         {
                                                  i=((n-11)/5)+2;
                                                  printf("%d ",i);
                                                  }
                     if((c==9)||(c==8)||(c==7))
                     {
                         i=(((n-c)/5)+2);
                          printf("%d ",i);
                         }
                         
                         if((c==1)||(c==2)||(c==6)||(c==7))
                         printf("W ");
                         if((c==5)||(c==8))
                         printf("M ");
                         if((c==4)||(c==3)||(c==0)||(c==9))
                         printf("A ");
                          if((c==3)||(c==0)||(c==1)||(c==2))
                          printf("L\n");
                          if((c==4)||(c==5)||(c==8)||(c==6)||(c==7)||(c==9))
                          printf("R\n");
                          }
                          system("pause");
                          }
                         
                                                               
                    
