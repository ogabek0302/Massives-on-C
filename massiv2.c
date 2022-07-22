#include <stdio.h>
#include <stdlib.h>


int main(){

    int N;
    printf("N=");
    scanf("%d", &N);
    int sonlar[N], index=0;
    
    for(int i=1; i<3*N; i++){ 
        if(i%2==0 && index+1<=N){
            sonlar[index++] = i;
        }
    }

    for(int i=0; i<N; i++){
        printf("%d: %d \n",i, sonlar[i]);
    }


    return 0; 
}