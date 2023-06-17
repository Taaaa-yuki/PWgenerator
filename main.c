#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LENGTH 20

char* generatePassword(int length) {
    static const char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;
    char* password = malloc((length + 1) * sizeof(char));

    srand(time(NULL));

    for (i = 0; i < length; i++) {
        int randomIndex = rand() % (sizeof(characters) - 1);
        password[i] = characters[randomIndex];
    }

    password[length] = '\0';
    return password;
}

int main() {
    int length;

    printf("パスワードの長さを入力してください: ");
    scanf("%d", &length);

    if (length > 0 && length <= MAX_LENGTH) {
        char* password = generatePassword(length);
        printf("生成されたパスワード: %s\n", password);
        free(password);
    } else {
        printf("エラー: 無効な長さです\n");
    }

    return 0;
}
