#include <set>
#include <string>
#include <cctype>
#include <iostream>
#include <sstream>
using namespace std;

void getlower(string &s)
{
	int i, len = s.size();
	for(i=0; i<len; i++)
	{
		if(isalpha(s.at(i))) 
        s.at(i) = islower(s.at(i))? s.at(i)-32 : s.at(i); // alphabet lower hai kya ? hai,toh capital kar do.capital hai toh rehne do
		else s.at(i) = ' '; // alphabet chorke kuch aur hai toh blank enter kar do
	}
}

int gcd(int a, int b)
{
	if(!b) return a;
	else return gcd(b,a%b);
}

int main()
{
	int game=0, total=0, g;
	string line, str;
	set< string > S; // Sets are containers that store unique elements following a specific order.
	while(getline(cin,line)) // get lines from the standard input stream ( cin ).
	{
		getlower(line); // modifies line,changes all lower cases to upper cases
		stringstream ss(line); // stringstream provides an interface to manipulate strings as if they were input/output streams.
		// ss ke andar line gaya
        while(ss >> str) // ss ab str hai
		{
			if(str=="BULLSHIT")
			{
				total += S.size();
				game++;
				S.clear();
			}
			else S.insert(str); // jab tak "BULLSHIT" nahi aata hai tab tak S mein insert karte jao
		}
	}
	g = gcd(total, game);
	cout << total/g << " / " << game/g << endl;
	return 0;
}
