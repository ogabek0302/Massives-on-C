#include <stdio.h>

int main()
{
    int n;
    

    printf("N: ");
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("a[%d] : ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 1; i < n; i += 2)
        printf("a[%d] %d\n",i + 1, a[i]);

    return 0;
}