#include <stdio.h>
#include "string_utils.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <input_string>\n", argv[0]);
        return 1;
    }

    int length = string_length(argv[1]);
    printf("%d\n", length);

    return 0;
}
