#include <stdio.h>
#include <string.h>
#include "string_utils.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <destination_string> <source_string>\n", argv[0]);
        return 1;
    }

    if (string_length(argv[1]) > MAX_LEN || string_length(argv[2]) > MAX_LEN) {
        printf("Error: Strings must not exceed %d characters.\n", MAX_LEN);
        return 1;
    }

    char result[MAX_LEN] = {0};
    strcpy(result, argv[1]);

    if (string_concat(result, argv[2]) == -1) {
        printf("Error: Concatenation exceeds max allowed length.\n");
        return 1;
    }

    printf("%s\n", result);

    return 0;
}
