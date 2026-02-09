#include "common.h"

void interpret_command(char** args) {
    // converts string for command into enum
    CommandType cmd = parse_command(args[0]);

    // switch - case using cmd enum
    switch (cmd) {

        case CMD_CD:
            if (args[1] == NULL) {
                printf("'cd' needs a directory passed as an argument\n");
                break;
            }
            if (args[2] != NULL) {
                printf("'cd' takes only one argument\n");
                break;
            }
            // cd is a shell builtin not a program so we use chdir to change the process working directory path
            chdir(args[1]);
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
        
        case CMD_DEL:
            if (args[1] == NULL) {
                printf("'del' needs a file passed as an argument\n");
                break;
            }
            if (args[2] != NULL) {
                printf("'del' takes only one argument\n");
                break;
            }
            args[0] = "rm";
            run_program(args);
            break;

        case CMD_REN:
            if (args[2] == NULL) {
                printf("'ren' needs two arguments\n");
                break;
            }
            args[0] = "mv";
            run_program(args);
            break;

        case CMD_COPY:
            if (args[2] == NULL) {
                printf("'copy' needs two arguments\n");
                break;
            }
            args[0] = "cp";
            run_program(args);
            break;

        default:
            printf("Unknown command: %s\n", args[0]);
            break;
    }
}