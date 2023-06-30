#include <stdio.h>
#include <stdlib.h>
#include "password_generator/password_generator.h"
#include "color_util/color_util.h"

int main() {
    int options;
    int length;

    printf("パスワードの要件を選択してください:\n");
    printf("0: アルファベットのみ\n");
    printf("1: 数字のみ\n");
    printf("2: アルファベットと数字の混合\n");
    printf("3: アルファベットの大文字と小文字と数字の混合\n");
    printf("選択: ");
    scanf("%d", &options);

    if (options < 0 || options > 3) {               // 0, 1, 2以外の数字が入力された場合は終了
        printf("無効な選択です。\n");
        return 0;
    }

    printf("パスワードの長さを入力してください: ");
    scanf("%d", &length);                           // パスワードの長さを入力

    char* password = malloc(length + 1);            // パスワードの長さ分のメモリを確保

    generate_password(password, options, length);   // パスワードの生成

    printf("生成されたパスワード: ");
    print_colored_text(password, COLOR_GREEN);      // パスワードを緑色で表示
    
    return 0;
}
