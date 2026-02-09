#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/wait.h>

#define BUF_SIZE 256
#define MAX_ARGS 2

// Project directions say to use case statement to evaluate commands
// Strings cannot be evaluated in a switch-case so parse_command() evaluates them to enum value
typedef enum {
    CMD_CD,
    CMD_DIR,
    CMD_TYPE,
    CMD_DEL,
    CMD_REN,
    CMD_COPY,
    CMD_UNKNOWN
} CommandType;

CommandType parse_command(char* command);
void interpret_command(char** args);
void run_program(char** args);

#endif
