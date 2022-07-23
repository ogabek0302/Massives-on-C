#include <stdio.h>

int main()
{
    int N, A[N];

    printf("N: ");
    scanf("%d", &N);

    A[0] = 1;
    A[1] = 1;
    for (int i = 2; i < N; ++i)
        A[i] = A[i - 2] + A[i - 1];

    for (int i = 0; i < N; ++i)
        printf("%d : %d\n", i, A[i]);
    return 0;
}