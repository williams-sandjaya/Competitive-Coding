#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int array[20002];
    int i,number;int answer=1;
    scanf("%d",&number);
    
    scanf("%d",&array[0]);
    printf("%d\n",answer);
    
    for(i=1;i<number;i++)
    {   
        scanf("%d",&array[i]);
        if (binary_search(array, array + i+1, array[i] + 1) || binary_search(array, array + i+1, array[i] - 1) ) {answer=answer;}
        if (binary_search(array, array + i+1, array[i] + 1) && binary_search(array, array + i+1, array[i] - 1) ) {answer--;}
        if (!(binary_search(array, array + i+1, array[i] + 1)) && !(binary_search(array, array + i+1, array[i] - 1)) ) answer++;
        
        stable_sort(array,array+i+1); 
        printf("%d\n",answer);
    }

printf("Justice\n");
system("pause");
return 0;
//http://ideone.com/GVCPAI
}
