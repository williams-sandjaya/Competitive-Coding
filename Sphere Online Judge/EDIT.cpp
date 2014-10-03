#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstring>
using namespace std;
// how many times alternativeness is voilated
int main(){
    char s[1001];
    int u=0,l=0,t;
    while(scanf("%s",&s)!=EOF){
        //printf("%s",s);
        int z=strlen(s);
        for(int i=0;i<z;i++){
            t=i%2; // t = 0||1
            if(s[i]>='a') if(t==0) u++; else l++; 
            if(s[i]<'a') if(t==0) l++; else u++; 
            //printf("%d %d\n",u,l);
        }
        //print min(u,l)
        if(u<l)
            printf("%d\n",u);
        else
            printf("%d\n",l);
        u=0;
        l=0;
    }
    return 0;
}






