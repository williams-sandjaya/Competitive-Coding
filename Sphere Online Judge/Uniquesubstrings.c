#include<stdio.h>
#include<string.h>
char array[10300];int k,t=0;

void subsets(int i, int j,char input[]) 
{
	
	static char output[sizeof input];

    output[j] = '\0';
//	printf("%s\n", output);
	
	
	
	for(k=0;k<10;k++)
	{array[t]=output[k];t++;}
	


    while(input[i] != '\0') {
        output[j] = input[i];
        subsets(i + 1, j + 1,input);
        do ++i;
        while(input[i] == input[i - 1]);
    }
}

int main() 
{
	char input[11];
    scanf("%s",&input);
    subsets(0, 0,input);
   // printf("Array :\n");
   // t=0;
   /*for(k=0;k<t;k++)
	{	printf("%c",array[k]);}
	printf("\n");*/
	
	int arraysize=t;int d=0;int m;int i,j;
	char twodarray[10][1025];
	for(k=0;k<t;k++)
	{ twodarray[(d++)%10][m]=array[k];if(d%10==0)m++;}
	printf("2D array :\n");
	
	for(i=1;i<(arraysize/10);i++)
	{for(j=0;j<10;j++)
    {	printf("%c",twodarray[j][i]);}printf("\n");}
    //printf("%d",arraysize/10 -1);
    int flag=0;
    //NOW all subsets are present in twodarray[10][arraysize/10]

    system("Pause");
    
}
