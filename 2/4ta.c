#include <stdio.h>

#define COMMAND(NAME, TYPE) TYPE ## _ ## NAME ## _command

#define DEFINE_COMMAND(NAME, TYPE) \
    void COMMAND(NAME, TYPE) (void)


DEFINE_COMMAND(start, internal) {
    printf("Internal start command executed.\n");
}

DEFINE_COMMAND(stop, external) {
    printf("External stop command executed.\n");
}

int main() {

    internal_start_command();
    external_stop_command();
    return 0;
}