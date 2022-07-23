#include <stdio.h>
 
int main()
{
    
    int n,k=0;
    
 
    printf("N: ");
    scanf("%d",&n);
    int a[n];

    for (int i=0; i<n; i++){
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
 
    for (int i=0; i<n; i++)
        if (a[i]%2 != 0){
            printf("%d\n",a[i]);
            k++;
        }
    printf("количество нечетных: %d\n",k);
    return 0;
}