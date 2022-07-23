#include <stdio.h>
 
int main()
{
    
    int n;
    int a[n];
 
    printf("N: ");
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    for (int i=n-1; i>=0; i--)
        printf("набоорот a[%d] : %d\n",i,a[i]);
    return 0;
}