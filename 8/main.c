#include <stdio.h>
#include "processes.h"

int main(void) {
    while (1) {
        printf("\n===== Task Manager =====\n");
        printf("1. Start a process\n");
        printf("2. List all processes\n");
        printf("3. Stop a process\n");
        printf("4. Exit\n");
        printf("Choose an option: ");

        int choice;
        if (scanf("%d", &choice) != 1) {
            printf("Invalid choice!\n");
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {}
            continue;
        }

        int flush;
        while ((flush = getchar()) != '\n' && flush != EOF) {}

        if (choice == 1) {
            char pname[MAX_PROCESS_NAME];
            printf("Process name (no spaces): ");
            if (scanf("%30s", pname) == 1) {
                unsigned int pid = createnewprocess(pname);
                if (pid == 0) {
                    printf("Failed to create process! Maximum limit or IDs exhausted.\n");
                } else {
                    printf("Process created with ID: %u\n", pid);
                }
            } else {
                printf("Invalid process name!\n");
            }

            while ((flush = getchar()) != '\n' && flush != EOF) {}

        } else if (choice == 2) {
            printf("\nProcesses:\n");
            listprocesses();
        } else if (choice == 3) {
            unsigned int pid;
            printf("Enter process ID to stop: ");
            if (scanf("%u", &pid) != 1) {
                printf("Invalid process ID!\n");
            } else {
                stopprocess(pid);
            }
            while ((flush = getchar()) != '\n' && flush != EOF) {}

        } else if (choice == 4) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}
