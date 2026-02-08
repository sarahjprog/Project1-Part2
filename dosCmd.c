#include <windows.h>
#include <stdlib.h>
#include <stdio.h>



void dosInterpreter(char *dosCmd, char *arg1, char *arg2) {

//variables 

    // cd
    if (strcmp(dosCmd, "cd") == 0) {
        //arg1 tells what path to go to 
        if (strlen(arg1)<1){
            print("not a valid argument");
        }
        SetCurrentDirectory(arg1);
    }
    // dir
    else if (strcmp(dosCmd, "dir") == 0) {
//        directory=opendir(".");        

    }
     // type
    else if (strcmp(dosCmd, "type") == 0) {
       

    }
    // del
    else if (strcmp(dosCmd, "del") == 0) {
        

    }
    // ren
    else if (strcmp(dosCmd, "ren") == 0) {
        

    }
// copy
    else if (strcmp(dosCmd, "copy") == 0) {
        
     
    }
    // pwd
    else if (strcmp(dosCmd, "pwd") == 0) {
    char *path =getenv("PATH");
    print(path);       

    }
    else {
        printf("Please enter valid commands");
    }
}


