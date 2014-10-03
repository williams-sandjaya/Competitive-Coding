#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
 
int state[1100][1100] ;
 
int recurse( int h , int a , int cnt , bool flag )
    {
      if ( h <= 0 || a <= 0 ) return cnt ; // health or armor becomes <=0 you die
      if ( state[h][a] ) return state[h][a] ;
      if ( flag ) state[h][a] = recurse ( h + 3 , a + 2 , cnt + 1 , !flag ) ; // start with air // cnt becomes 0 here
      else
         state[h][a] = max ( state[h][a] ,  max ( recurse ( h - 5 , a - 10 , cnt + 1 , !flag ) , recurse ( h - 20 , a + 5 , cnt + 1 , !flag ) ) ) ;
         // maximise health and armor
     return state[h][a];
   }
 
int main()
  {
    int n , a , b ;
    scanf( "%d", &n );
    for(int i = 0 ; i < n ; i++)
    {
     memset ( state , 0 , sizeof (state) ) ;
     scanf("%d%d", &a , &b );
     printf("%d\n" , recurse( a , b , -1 ,  1 ));// flag 1 to start the game
    }
 
  }
