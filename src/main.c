#include "common.h"

int main() {
  char userInput[BUF_SIZE]; // buffer to hold user input
  char *args[MAX_ARGS + 2]; // array for storing command + arguments + 1 more for null termination

  printf("Type Ctrl+C to Exit.\n");

  // loop that repeats unless the user hits ctrl + c
  while (1) {
    fflush(stdout);
    fgets(userInput, BUF_SIZE, stdin);

    // strip newline
    userInput[strcspn(userInput, "\n")] = 0;

    // tokenizer gets command and arguments
    int i = 0;
    char *token = strtok(userInput, " ");
    while (token != NULL && i < MAX_ARGS + 1) {
      args[i++] = token;
      token = strtok(NULL, " ");
    }

    if (token != NULL) {
      printf("Too many arguments have been entered.  Max: %d\n", MAX_ARGS);
      continue; // regect if too many arguments are entered
    }

    if (i == 0) {
      continue; // skip empty input
    }

    args[i] = NULL; // argv must be NULL-terminated

    interpret_command(args);
  }
}
