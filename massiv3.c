#include <stdio.h>
#include <stdlib.h>


int main(){

    int A=5, D=2, N=10;
    int A0=A, A1, sonlar[N];
    
    sonlar[0] = A0;

    for(int i=1; i<N; i++){ 
        A1 = A0 + D;
        sonlar[i] = A1;
        A0 = A1;
    }


    for(int i=0; i<N; i++){
        printf("%d ", sonlar[i]);
    }


    return 0; 
}