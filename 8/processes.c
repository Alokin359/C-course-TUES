#include <stdio.h>
#include "processes.h"

Process processes[MAX_PROCESSES];
unsigned int processescount = 0;

static unsigned int nextprocessid(void) {
    static unsigned int last_id = 0;
    if (last_id < 65535) {
        last_id++;
        return last_id;
    }
    return 0;
}

unsigned int createnewprocess(const char* name) {
    if (processescount >= MAX_PROCESSES) {
        return 0;
    }

    unsigned int pid = nextprocessid();
    if (pid == 0) {
        return 0;
    }

    processes[processescount].id = pid;

    int i = 0;
    while (i < (MAX_PROCESS_NAME - 1)) {
        if (name[i] == '\0') {
            break;
        }
        processes[processescount].name[i] = name[i];
        i++;
    }
    processes[processescount].name[i] = '\0';

    processescount++;
    return pid;
}

void stopprocess(unsigned int pid) {
    for (unsigned int i = 0; i < processescount; i++) {
        if (processes[i].id == pid) {
            for (unsigned int j = i; j < processescount - 1; j++) {
                processes[j] = processes[j + 1];
            }
            processescount--;
            return;
        }
    }
}

void listprocesses(void) {
    if (processescount == 0) {
        printf("No active processes\n");
        return;
    }
    for (unsigned int i = 0; i < processescount; i++) {
        printf("Process ID: %u, Name: %s\n", processes[i].id, processes[i].name);
    }
}