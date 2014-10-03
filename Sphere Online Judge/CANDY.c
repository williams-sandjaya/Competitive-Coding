#include<stdio.h>
int main()
{
    while (1) {
        int sum = 0, N, i, input[10001], moves = 0;
        scanf("%d", &N);
        if (N == -1)
            return 0;
        for (i = 0; i < N; i++)
            scanf("%d", &input[i]);
        
        for (i = 0; i < N; i++)
            sum = sum + input[i];
            
        if (sum % N != 0)
            printf("-1\n");
            
        else {
            for (i = 0; i < N; i++)
                if (input[i] < sum / N)
                    moves = moves + sum / N - input[i];
            printf("%d\n", moves);
        }
 
    }
    system("pause");
}
