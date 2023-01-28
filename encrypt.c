#include "encrypt.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *msg;
  printf("Enter text to encrypt.\n\n");
  printf("====================================================\n");

  while (fgets(msg, 800, stdin)) {
    encrypt(msg);
    printf("Encrypting...: %s\n\n", msg);
    printf("====================================================\n");
  }
  return 0;
}
