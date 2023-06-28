# PWgenerator

## Description

This program returns a random value according to the number of characters.
The user can then create numbers, alphabets, and mixes.

## Usage

The user will be prompted to choose from the following password criteria:

```zsh
gcc -c color_util/color_util.c -o color_util/color_util.o
gcc -c password_generator/password_generator.c -o password_generator/password_generator.o
gcc main.c color_util/color_util.o password_generator/password_generator.o -o my_program
```
