#include <stdio.h>
#include <stdlib.h>
#include "password_generator.h"

int main() {
    int options;
    int length;

    printf("パスワードの要件を選択してください:\n");
    printf("0: アルファベットのみ\n");
    printf("1: 数字のみ\n");
    printf("2: アルファベットと数字の混合\n");
    printf("選択: ");
    scanf("%d", &options);

    if (options < 0 || options > 2) {
        printf("無効な選択です。\n");
        return 0;
    } // 0, 1, 2以外の数字が入力された場合は終了

    printf("パスワードの長さを入力してください: ");
    scanf("%d", &length); // パスワードの長さを入力

    char* password = malloc(length + 1); // パスワードの長さ分のメモリを確保

    generate_password(password, options, length); // パスワードの生成

    printf("\x1b[32m");
    printf("生成されたパスワード: %s\n", password);
    printf("\x1b[0m");
    
    return 0;
}
