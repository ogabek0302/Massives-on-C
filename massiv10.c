#include <stdio.h>
#include <stdlib.h>

// massiv 10-misol.
int main(){

    int N, juft_index=0, toq_index=0, asosiyga_yordamchi=0;
    
    scanf("%d", &N);
    
    int sonlar[N], asosiy[N], juft[N], toq[N];

    for(int i=0; i<N; i++){
        scanf("%d", &sonlar[i]);
    }

    for(int i=0; i<N; i++){
        if(sonlar[i]%2==0){
            juft[juft_index++] = sonlar[i];
        } else {
            toq[toq_index++] = sonlar[i];
        }
    }


    for(int i=0; i<juft_index; i++){
        asosiy[i] = juft[i];
    }


    for(int i=toq_index-1; i>=0; i--){
        asosiy[asosiyga_yordamchi+juft_index] = toq[i];
        asosiyga_yordamchi++;
    }


    for(int i=0; i<N; i++){
        printf("%d \n", asosiy[i]);
    }


    return 0; 
}