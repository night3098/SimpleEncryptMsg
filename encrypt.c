#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "encrypt.h"

int main() {
	char *msg;
    printf("Enter text to encrypt.\nEnter q to exit\n");

	while(fgets(msg, 800, stdin)) {
        if(strcmp(msg, "q") == 0) {
            break;
        }
        else {
		    encrypt(msg);
            printf("%s", msg, "\n");
        }
	}
	
	return 0;
}

