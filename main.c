#include <stdio.h>
#include "password_generator.h"

int main() {
    char password[10];
    generate_password(password, 10); // パスワードの生成
    printf("\x1b[32m");
    printf("Generated password: %s\n", password);
    return 0;
}
