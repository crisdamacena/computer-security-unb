#include "minunit.h" 
#include "./../modules/vigenere_cipher.c"  


MU_TEST(test_vigenere_encrypt)
{
    char message[] = "ATTACKATDAWN";
    char key[] = "LEMON";
    char expected[] = "LXFOPVEFRNHR";

    mu_assert_string_eq(encrypt_vigenere(key,message),expected);
}

MU_TEST(test_viginere_decrypt)
{
    char cryptogram[] = "LXFOPVEFRNHR";
    char key[] = "LEMON";
    char expected[] = "ATTACKATDAWN";

    mu_assert_string_eq(decrypt_vigenere(key,cryptogram),expected);
}

MU_TEST_SUITE(test_suite_vigenere) {
    
    MU_RUN_TEST(test_vigenere_encrypt);
	MU_RUN_TEST(test_viginere_decrypt);
}

