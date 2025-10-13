#include <stdio.h>

int main(){
    int i, j;

    // upper half
    for(i = 1; i <= 5; i++){
        for(j = 1; j <= i; j++){
            printf("*\n");
        }
        printf("\n");
    }

    // lower half
    for(i = 4; i >= 1; i--){
        for(j = 1; j <= i; j++){
            printf("*\n");
        }
        printf("\n");
    }

    return 0;
}