#include "common.h"

CommandType parse_command(char* cmd) {
    if (strcmp(cmd, "cd") == 0) return CMD_CD;
    if (strcmp(cmd, "dir") == 0) return CMD_DIR;
    if (strcmp(cmd, "type") == 0) return CMD_TYPE;
    if (strcmp(cmd, "del") == 0) return CMD_DEL;
    if (strcmp(cmd, "ren") == 0) return CMD_REN;
    if (strcmp(cmd, "copy") == 0) return CMD_COPY;

    return CMD_UNKNOWN;
}