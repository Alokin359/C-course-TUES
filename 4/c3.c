#include <stdio.h>
#include "transformation.h"

int main() {
    char valid_input[] = "-123";
    char invalid_input[] = "12ab23";

    struct transformation result1 = string_to_long(valid_input);
    if (result1.error[0] == '\0') {
        printf("Input: %s, Result: %ld, Error: None\n", valid_input, result1.result);
    } else {
        printf("Input: %s, Result: %ld, Error: %s\n", valid_input, result1.result, result1.error);
    }

    struct transformation result2 = string_to_long(invalid_input);
    if (result2.error[0] == '\0') {
        printf("Input: %s, Result: %ld, Error: None\n", invalid_input, result2.result);
    } else {
        printf("Input: %s, Result: %ld, Error: %s\n", invalid_input, result2.result, result2.error);
    }

    return 0;
}
