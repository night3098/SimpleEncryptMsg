#include "encrypt.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *str;
  printf("Enter text to dencrypt.\n\n");
  printf("===================================================\n");
  while (fgets(str, 800, stdin)) {
    decrypt(str);
    printf("decrypting....: %s\n\n", str);
    printf("====================================================\n");
  }
  return 0;
}
