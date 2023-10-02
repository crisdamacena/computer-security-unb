#include <stdio.h>
#include "modules/caesar_cipher.c"
#include "modules/vigenere_cipher.c"

int main() {

  int option = 0;
  char result = "";

  printf("\nCifra de Vigenere\n\n");

  printf("\nSelecione a opção:\n\n");

  printf("\n1 - Cifrar:\n\n");
  printf("\n2 - Decifrar:\n\n");
  printf("\n3 - Ataque:\n\n");

  scanf("%d", &option);

  switch (option) {
  case 1:
    printf("Opção CIFRAR selecionada.\n");
    printf("\nCHAVE: TECNOLOGIA\tMENSAGEM: EU SOU ESTUDANTE DO CURSO DE COMPUTACAO\n");
    encrypt_vigenere("TECNOLOGIA","EU SOU ESTUDANTE DO CURSO DE COMPUTACAO");

    break;
  case 2:
    printf("Opção DECIFRAR selecionada.\n");
    printf("\nCHAVE: TECNOLOGIA\tCIFRA: XY FCF KATNHCAHP JW VYTFC RK CHQRHHLQGW\n");
    decrypt_vigenere("TECNOLOGIA","XY FCF KATNHCAHP JW VYTFC RK CHQRHHLQGW");

    break;
  case 3:
    printf("Opção 3 não implementada.\n");
    break;
  default:
    printf("Opção inválida.\n");
  }

  return 0;
}