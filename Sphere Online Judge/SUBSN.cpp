#include <vector>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
using namespace std;

int binarysearch(vector<int> &positions, int index) // letterposition[t[i] - 'a'] bheja
{
	int lo = 0, hi = positions.size() - 1, mid,ret = -1;

	while(lo <= hi)
    {
		mid = (lo + hi) / 2;
		if(positions[mid] > index)
        {
			ret = positions[mid];
			hi = mid - 1;
		}
		else
			lo = mid + 1;
	}
	return ret;
}
    

int main() 
{
	int n,q;string s,t;
	cin >> n;
	cin.ignore();

	for(int c = 1; c <= n; c++)
    {
		vector<int> letterposition[26];
		getline(cin, s);
		cin >> q;
		cin.ignore();
		cout << "Case " << c << ":" << endl;

		for(int i = 0; i < (int)s.length(); i++)
			letterposition[s[i] - 'a'].push_back(i); // s[i] - 'a' waala letter kon kon sa position mein hai

		while(q--)
        {
			getline(cin, t);
			int currentposition = -1;
			bool flag = true;

			for(int i = 0; i < (int)t.length(); i++)
            {
				int next = binarysearch(letterposition[t[i] - 'a'], currentposition);
				if(next == -1)
                {
					flag = false;
					break;
				}
				currentposition = next; // current postion of string s while scanning
			}

			if(flag)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
	return 0;
}
