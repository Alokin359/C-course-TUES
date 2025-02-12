#ifndef PROCESSES_H
#define PROCESSES_H
#define MAX_PROCESSES 5
#define MAX_PROCESS_NAME 31

typedef struct {
    unsigned int id;
    char name[MAX_PROCESS_NAME];
} Process;

extern Process processes[MAX_PROCESSES];
extern unsigned int processescount;

unsigned int createnewprocess(const char* name);
void stopprocess(unsigned int pid);
void listprocesses(void);

#endif