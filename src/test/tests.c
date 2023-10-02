#include "caesar_cipher_test.c" 
#include "vigenere_cipher_test.c" 

int all_tests() {

    MU_RUN_SUITE(test_suite_vigenere);
	MU_REPORT();
	return 0;
}

int main(int argc, char *argv[]) {
    char *result = all_tests();
    if (result != 0) {
        printf("%s\n", result);
    } else {
        printf("All tests executed\n\n\n\n");
    }
    return result != 0;
}