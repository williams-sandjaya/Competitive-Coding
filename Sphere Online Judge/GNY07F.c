#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
  int i,j,k;
  int N,max,test=0;
  char s[200],c;  

  scanf("%d",&N);
  getchar(); // to get rid of the \n pressed (it is stored in buffer)
  while(N--)
  {
    i=0;
    while(1)
    {
      c=getchar();
      if(c=='\n')
      {
      s[i]='\0';
      break; // gets you out of the loop
      }
     s[i++]=c; // stores in s[]
    }
    
    ++test;
    j=0;
    if(s[0]=='\0'||s[0]=='\n') // for the string being null
    max=1;
    else
     max=0; // for string not being null
     
    for(i=0;s[i]!='\0';i++)
    {
      if(s[i]=='[')
         j++;
      else if(s[i]==']')
        j--;
      if(j>max)
       max=j;
   }
   
   if(max==1&&s[0]=='\0')
   printf("%d %d\n",test,max); // for a null string answer is always 1
   else
   printf("%d %d\n",test,(int)pow(2,max));
 }

return 0;
}


