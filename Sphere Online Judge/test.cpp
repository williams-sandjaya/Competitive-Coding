// lower_bound/upper_bound example
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main () 
{
  int myints[] = {10,20,30,30,20,10,10,20};
  sort (myints,myints+8); // 10 10 10 20 20 20 30 30
  
  cout << "lower_bound at position " << lower_bound( myints, myints+8, 20) - myints << endl; // outputs 3
  cout << "upper_bound at position " << upper_bound( myints, myints+8, 20) - myints << endl; // outputs 6
  
  system("pause");
  return 0;
}
