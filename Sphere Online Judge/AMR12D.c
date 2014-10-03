#include<stdio.h>

int xstrlen (char *s)
{   int length=0;
     while (*s != '\0')
	 	{
     	  
     	  s++;
     	  length++;
         }
         return (length);
  
}

int main()
{
    char input[11];int test;int l;int i=0;int flag=0;
    scanf("%d",&test);
    while(test--)
   {scanf("%s",input);
    l = xstrlen(input);
   // printf("%d\n",l);
    
    while(i<l){
    if(input[i]==input[l-i-1])
    {
    flag++;
    
    }
    i++;
	}
   
  //printf("flag = %d\n",flag);
   if(flag == l)
   printf("YES\n");
   else
   printf("NO\n");
   
    memset(input,0,10);
    i=0;flag=0;
   }
   return 0;

//system("pause");
}
