#include <stdio.h>

// ANSIエスケープシーケンスを使って文字列の色を変更する関数
void print_colored_text(const char* text, const char* color_code) {
    printf("%s%s%s", color_code, text, "\x1b[0m\n");
}