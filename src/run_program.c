#include "common.h"

void run_program(char** args){
    pid_t pid = fork();

    if (pid < 0) {
        perror("fork");
        return;
    }

    if (pid == 0) {
        execvp(args[0], args);
        perror("execvp");
        _exit(EXIT_FAILURE);
    } else {
        waitpid(pid, NULL, 0);
    }
}