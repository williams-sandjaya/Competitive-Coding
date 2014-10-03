#include <stdio.h>
#include <string.h>
int main()
{
    int i,s,l,t;
       
       int n;
    
    while(scanf("%d",&n)!=EOF)
    {  

       getchar();
       char str[1050000];
       gets(str);
       for(l=0;str[l]!='\0';l++);
       i=2;
       while(i!=0){
                   t=n;
       while(t--){
       for(i=l-1;str[i]!=' ';i--)
       {
                           if(str[i]=='\0' || str[i]=='\0' ||str[i]=='\a' ||str[i]=='\b' ||str[i]=='\f' ||str[i]=='\n' ||str[i]=='\r')
                           {continue;}
                         printf("%c",str[i]);
                         if(str[i-1]==' ')
                         {printf(" ");}
                         
                          if(i==0 && t==0)
                        {break;}
                        if(i==0)
                        {printf(" "); break;}
                        
                         
                         }}l=i;}
       printf("\n");
       memset(str,'\0',1050000);
 }

return 0;

}
/*
HASKELL
z(n:b)=unwords[x|x<-b,y<-[1..read n]];main=interact$reverse.z.words
*/

/*
RUBY
https://gist.github.com/AnkurGel/1217165
c=gets.to_i
s=gets.split(' ')
s.each{|a| a[0,0]=" "};n=Array.new(0)
s.each{|a| n<<a.reverse*c}
puts n.reverse.to_s
*/
