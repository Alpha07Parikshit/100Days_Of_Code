#include <stdio.h>
#include <string.h>

int main(){
    char bin[50];
    int i;

    printf("Enter a binary number: ");
    scanf("%s", bin);

    for(i = 0; i < strlen(bin); i++){
        if(bin[i] == '0'){
            bin[i] = '1';
        }
        else if(bin[i] == '1'){
            bin[i] = '0';
        }
        else{
            printf("Invalid Binary Number\n");
            return;
        }
    }

    printf("1's Complement = %s\n", bin);

    return 0;
}