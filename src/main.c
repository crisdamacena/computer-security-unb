#include <stdio.h>
#include "modules/caesar_cipher.c"

int main() {
  printf("Hello, world!\n");

  char message[] = "Hello, world!";

  printf("%s\n",encrypt_caesar(3,message));

  return 0;
}