#include <stdlib.h>
#include <time.h>

void generate_password(char* password, int length) {
    // パスワード生成ロジックの実装
    srand(time(NULL)); // 乱数シードを初期化

    for (int i = 0; i < length; i++) {
        password[i] = 'A' + rand() % 26; // A-Zのアルファベットをランダムに選択
    }

    password[length] = '\0'; // 文字列の終端を指定
}
