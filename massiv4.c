#include <stdio.h>

int main()
{

    int N;
    int A[N], D, pow;

    printf("N: ");
    scanf("%d", &N);

    printf("A0: ");
    scanf("%d", &A[0]);

    printf("D: ");
    scanf("%d", &D);

    pow = 1;

    for (int i = 1; i < N; i++)
    {
        pow *= D;
        A[i] = A[0] * pow;
    }

    for (int i = 0; i < N; i++)
        printf("%d : %d\n", i, A[i]);

    return 0;
}