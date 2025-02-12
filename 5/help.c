#include <stdio.h>

int main() {
    printf("\n=== String Operations Application ===\n");
    printf("Select a function to learn more:\n");
    printf("1. string_length - Find the length of a string\n");
    printf("   Usage: string_length.exe <string>\n");
    printf("   Example: > string_length.exe Ivan\n");
    printf("   Output: 4\n\n");

    printf("2. string_concat - Concatenate two strings\n");
    printf("   Usage: string_concat.exe <destination_string> <source_string>\n");
    printf("   Example: > string_concat.exe Hello World\n");
    printf("   Output: HelloWorld\n\n");

    printf("3. string_compare - Compare two strings lexicographically\n");
    printf("   Usage: string_compare.exe <first_string> <second_string>\n");
    printf("   Example: > string_compare.exe Alex Boyan\n");
    printf("   Output: -1\n\n");

    return 0;
}
