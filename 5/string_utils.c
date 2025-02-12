#include <stdio.h>
#include "string_utils.h"

int string_length(const char input[]) {
    int length = 0;
    while (input[length] != '\0') {
        length++;
    }
    return length;
}

int string_concat(char destination[], const char source[]) {
    int dest_len = string_length(destination);
    int source_len = string_length(source);

    if (dest_len + source_len >= MAX_LEN) {
        return -1;
    }

    for (int i = 0; source[i] != '\0'; i++) {
        destination[dest_len + i] = source[i];
    }
    destination[dest_len + source_len] = '\0';

    return 0;
}

int string_compare(const char first[], const char second[]) {
    for (int i = 0; first[i] != '\0' || second[i] != '\0'; i++) {
        if (first[i] < second[i]) return -1;
        if (first[i] > second[i]) return 1;
    }
    return 0;
}
