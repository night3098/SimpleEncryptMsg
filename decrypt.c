#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "encrypt.h"

int main() {
    char *str;
    printf("Enter text to dencrypt.\nEnter q to exit\n");	
    while(fgets(str, 800, stdin)) {
	decrypt(str);
	printf("%s", str);
    }
	return 0;
}
