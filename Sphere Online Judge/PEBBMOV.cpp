#include <ios>
#include <set>
#include <string>
using namespace std;

int main()
{
	int n, i;
	char a[1000];
	while(scanf("%d", &n)==1)
	{
		set <string> S;
		set <string> :: iterator it;
		//an iterator is any object that, pointing to some element in a range of elements (such as an 
        //array or a container), has the ability to iterate through the elements of that range using a set of operators
		for(i=0; i<n; i++)
		{
			scanf("%s", a);
			string s(a);
			it = S.find(s);
			if(it==S.end()) S.insert(s);
			else S.erase(it);
		}
		if(S.empty()) printf("second player\n");
		else printf("first player\n");
	}
	return 0;
}
