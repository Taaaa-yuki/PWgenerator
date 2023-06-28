// color_util.h

#ifndef COLOR_UTIL_H
#define COLOR_UTIL_H

// テキストの色を定義
#define COLOR_RED     "\x1b[31m"
#define COLOR_GREEN   "\x1b[32m"
#define COLOR_YELLOW  "\x1b[33m"
#define COLOR_BLUE    "\x1b[34m"
#define COLOR_MAGENTA "\x1b[35m"
#define COLOR_CYAN    "\x1b[36m"
#define COLOR_RESET   "\x1b[0m"

// カラーコードを表示するための関数
void print_colored_text(const char* color, const char* text);

#endif
