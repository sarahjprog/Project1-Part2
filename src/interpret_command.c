#include "common.h"

void interpret_command(char** args) {
    CommandType cmd = parse_command(args[0]);

    switch (cmd) {
        case CMD_CD:
            break;
        case CMD_DIR:
            if (args[1] != NULL) {
                printf("'dir' takes no arguments\n");
                break;
            }
            args[0] = "ls";
            run_program(args);
            break;
        case CMD_TYPE:
            if (args[1] == NULL) {
                printf("'type' needs a file passed as an argument\n");
                break;
            }
            if (args[2] != NULL) {
                printf("'type' takes only one argument\n");
                break;
            }
            args[0] = "cat";
            run_program(args);
            break;
        default:
            printf("Unknown command: %s\n", args[0]);
            break;
    }
}