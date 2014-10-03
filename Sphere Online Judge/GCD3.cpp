#include <ios>
#include <cstring>
using namespace std;

int main()
{
	char num1[300], num2[300];
	int k, t, len, i;
	long long pow2[17], temp;
	pow2[0] = 1;
	for(i=1; i<17; i++)
		pow2[i] = pow2[i-1] << 1; // pow2[i] = 2^i
	scanf("%d", &t);
	while(t--)
	{
              // yaad rakhnaki saara operations num1 ke upar hi hoga
		scanf("%s %s %d", num1, num2, &k);
		len = strlen(num1);
		if((num1[len-1]-'0')&1) printf("1\n"); // last digit of num1&1 // true(1) for num1[len-1]=1,3,5,7,9
		else
		{
			i = min(len,k);
			
			sscanf(&num1[len-i], "%lld", &temp); // num[len-i] se end tak poora temp mein store ho jayega as lld
			// temp always an even number
			for( ; i>0; i--)
			{
				if(!(temp&(pow2[i]-1))) // false for temp being an odd number
				{
					printf("%lld\n", pow2[i]);
					break;
				}
			}
		}
	}
	return 0;
}
