#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "encrypt.h"

int main() {
    char *msg;
    printf("Enter text to encrypt.\n\n");
    
    while(fgets(msg, 800, stdin)) {
        encrypt(msg);
        printf("%s\n\n", msg);
    }
    return 0;
}

