#include <stdio.h>

int main(){
    char num[100];
    int freq[10] = {0};
    int i, max = 0, digit;

    scanf("%s", num);

    for(i = 0; num[i] != '\0'; i++){
        freq[num[i] - '0']++;
    }

    for(i = 0; i < 10; i++){
        if(freq[i] > max){
            max = freq[i];
            digit = i;
        }
    }

    printf("%d\n", digit);

    return 0;
}