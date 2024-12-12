#include<stdio.h>
int main()
{
    int M,N,i,temp;
    while(1){
        scanf("%d %d", &M, &N);
        if (N <= 0 || M <= 0)
            break;

            if(M<N){
                temp = M;
                M = N;
                N = temp;
            }
        int sum = 0;
        for (i = N; i <= M; i++)
        { 
            sum += i;
            printf("%d ", i);   
        }
    printf("Sum=%d\n",sum);
    }
    
    return 0;
}
    
    
