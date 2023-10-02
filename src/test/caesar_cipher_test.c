#include "minunit.h" 
#include "./../modules/caesar_cipher.c"

MU_TEST(test_caesar_encrypt)
{
    char message[] = "Hello, World!";
    int shift = 3;
    char expected[] = "Khoor, Zruog!";

    mu_assert_string_eq(encrypt_caesar(shift,message),expected);
}

MU_TEST(test_caesar_decrypt)
{
    char message[] = "Khoor, Zruog!";
    int shift = 3;
    char expected[] = "Hello, World!";

    mu_assert_string_eq(decrypt_caesar(shift,message),expected);
}

MU_TEST_SUITE(test_suite_caesar) {

	MU_RUN_TEST(test_caesar_encrypt);
    MU_RUN_TEST(test_caesar_decrypt);
}