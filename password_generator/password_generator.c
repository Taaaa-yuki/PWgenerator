#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "password_generator.h"

// パスワードを生成する関数
void generate_password(char* password, int options, int length) {
    switch (options) {
        case 0:
            random_alphabet(password, length);
            break;
        case 1:
            random_number(password, length);
            break;
        case 2:
            random_alphanumeric(password, length);
            break;
        case 3:
            random_alphabet_mix(password, length);
            break;
        default:
            printf("無効な選択です。\n");
            return;
    }
}


// アルファベットのみのパスワードを生成する関数
void random_alphabet(char* alphabet, int length) {
    srand(time(NULL)); // 乱数シードを初期化

    for (int i = 0; i < length; i++) {
        alphabet[i] = 'A' + rand() % 26; // A-Zのアルファベットをランダムに選択
    }

    alphabet[length] = '\0'; // 文字列の終端を指定
}


// 数字のみのパスワードを生成する関数
void random_number(char* number, int length) {
    srand(time(NULL)); // 乱数シードを初期化

    for (int i = 0; i < length; i++) {
        number[i] = '0' + rand() % 10; // 0-9の数字をランダムに選択
    }

    number[length] = '\0'; // 文字列の終端を指定
}


// アルファベットと数字の混合のパスワードを生成する関数
void random_alphanumeric(char* alphanumeric, int length) {
    srand(time(NULL)); // 乱数シードを初期化

    for (int i = 0; i < length; i++) {
        int random = rand() % 2; // 0か1をランダムに選択

        if (random == 0) {
            alphanumeric[i] = 'A' + rand() % 26; // A-Zのアルファベットをランダムに選択
        } else {
            alphanumeric[i] = '0' + rand() % 10; // 0-9の数字をランダムに選択
        }
    }

    alphanumeric[length] = '\0'; // 文字列の終端を指定
}


// アルファベットの大文字と小文字と数字の混合のパスワードを生成する関数
void random_alphabet_mix(char* alphabet_mix, int length) {
    srand(time(NULL)); // 乱数シードを初期化

    for (int i = 0; i < length; i++) {
        int random = rand() % 2; // 0か1をランダムに選択

        if (random == 0) {
            alphabet_mix[i] = 'A' + rand() % 26; // A-Zのアルファベットをランダムに選択
        } else {
            alphabet_mix[i] = 'a' + rand() % 26; // a-zのアルファベットをランダムに選択
        }
    }

    alphabet_mix[length] = '\0'; // 文字列の終端を指定
}