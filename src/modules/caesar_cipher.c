char* encrypt_caesar(int shift, char message[]) {
  char* message_result = message;

    for (int i = 0; message_result[i] != '\0'; i++) {
        if (message_result[i] >= 'a' && message_result[i] <= 'z') {
            message_result[i] = (message_result[i] - 'a' + shift) % 26 + 'a';
        } else if (message_result[i] >= 'A' && message_result[i] <= 'Z') {
            message_result[i] = (message_result[i] - 'A' + shift) % 26 + 'A';
        }
    }

  return message_result;
}

char* decrypt_caesar(int shift, char message[]) {
  char* message_result = message;

  encrypt_caesar(-shift, message_result);
  
  return message_result;
}