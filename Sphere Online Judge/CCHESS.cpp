#include <cstdio>
#include <cstring>
#include <queue>
#include <iostream>
#include <cstdlib>
using namespace std;

struct P 
{
  char x, y;
  int c;
};

int bfs( P s, P t ) 
{
  queue< P > q;
  q.push( s );
  
  while ( !q.empty() ) 
  {
    s = q.front();
    q.pop();
    if ( s.x < 0 || s.x > 7 || s.y < 0 || s.y > 7 )
      continue;

    if ( s.x == t.x && s.y == t.y )
      return s.c;

      // combination of (+- 1,+- 2) in clockwise direction
    q.push( ( P ) { s.x + 1, s.y + 2, s.c + 1 } );
    q.push( ( P ) { s.x + 2, s.y + 1, s.c + 1 } );
    q.push( ( P ) { s.x + 2, s.y - 1, s.c + 1 } );
    q.push( ( P ) { s.x + 1, s.y - 2, s.c + 1 } );
    q.push( ( P ) { s.x - 1, s.y - 2, s.c + 1 } );
    q.push( ( P ) { s.x - 2, s.y - 1, s.c + 1 } );
    q.push( ( P ) { s.x - 2, s.y + 1, s.c + 1 } );
    q.push( ( P ) { s.x - 1, s.y + 2, s.c + 1 } );
  }
}

int main() 
{
  string sx, tx;int n;string sy, ty;

  scanf( "%d", &n );
  while ( n-- ) 
  {
    scanf( "%s%s%s%s", sx,sy,tx,ty );
    string s,t;
    s=sx+sy;
    t=tx+ty;
    printf( "%d\n", bfs(( P ) { s[ 0 ] - '1', s[ 1 ] - '1' }, ( P ) { t[ 0 ] - '1', t[ 1 ] - '1' }) );
  }
  return 0;
}

