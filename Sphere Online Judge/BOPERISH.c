#include<stdio.h>
int main()
{
    int i, N;
    while (1) {
        scanf("%d", &N);
        int input[N];
        if (N == 0)
            break;
        for (i = 0; i < N; i++)
            scanf("%d", &input[i]);
            
        bubblesort(input,N);
        
        for (i = N; i >= 1; i--) {
            if (input[N - i] >= i)
                break;
        }
        printf("%d\n", i);
 
    }
    system("pause");
}

int bubblesort(int *array,int n)
        {
            int temp;
            int i,j;
            
            
            for (j=0;j<n;j++)
            {
                for (i=0;i<n-j;i++)
            {
                
                if((*(array+i)) > (*(array+i+1)))
            {
                 temp=*(array+i);
                 *(array+i)= *(array+i+1);
                 *(array+i+1)=temp;
                 
                 }
                 
                
                }
                
                }}
