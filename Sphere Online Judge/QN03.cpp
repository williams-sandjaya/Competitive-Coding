#include <iostream>
#include <string>

using namespace std;

void flip( char &c ) {
  c = c == '0' ? '1' : '0';
}

int main() {
  bool doFlip;
  int t, i, ans;
  string s;
  int test;
  t = 1;
  scanf("%d",&test);
  //printf("%d",test);
  while(test--){
		  cin >> s;
			doFlip = false;
			ans = 0;
			for ( i = 0; i < s.size(); ++i ) {
			  if ( doFlip ) {
				flip( s[ i ] );
			  }
			  if ( s[ i ] == '1' ) {
				flip( s[ i ] );
				doFlip = !doFlip;
				++ans;
			  }
			}//10000  ->  2
			  cout << ans << '\n';

}
  return 0;
}
