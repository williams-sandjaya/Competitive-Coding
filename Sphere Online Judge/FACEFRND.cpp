#include<cstdio>
#include<iostream>
#include<algorithm>
#include<conio.h>
using namespace std;
int main(){
	int n;int frnd_id;int array[10000];int ni;int i;
    for(i=0000;i<9999;i++) 
	array[i]=0;
	
	scanf("%d",&n);
	while(n--){
		scanf("%d",&frnd_id);
		array[frnd_id]=-1;
		scanf("%d",&ni);
		while(ni--)
		{scanf("%d",&frnd_id);
		if(array[frnd_id]!= -1)
		array[frnd_id]++;
		}

	}
	int cnt=0;
	for(i=0000;i<9999;i++) //printf("%d",array[i]);
	if(array[i]>0) cnt++;
	printf("%d\n",cnt);
	getch();
	return 0;
}
