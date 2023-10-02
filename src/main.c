#include <stdio.h>
#include "modules/caesar_cipher.c"
#include "modules/vigenere_cipher.c"

int main() {

  printf("\nEsta é a cifra final: %s\n\n\n",encrypt_vigenere("LEMON","ATTACKATDAWN"));

  return 0;
}