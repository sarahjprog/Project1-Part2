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
        strcat(dosCmd,arg1);
        system(dosCmd);
    }
    // dir: gives a list of files in the directory
    else if (strcmp(dosCmd, "dir") == 0) {
//        directory=opendir(".");   
         system("ls");
        
    }
     //type
    else if (strcmp(dosCmd, "type") == 0) {
        
        if (strlen(arg1)<1){
            print("not a valid argument");
        system("cat");

    }
    // del: deletes the file in the directory, 
    else if (strcmp(dosCmd, "del") == 0) {
         
        
        system("rm");

    }
    // ren
    else if (strcmp(dosCmd, "ren") == 0) {
         system("mv");

    }
//copy
    else if (strcmp(dosCmd, "copy") == 0) {
         system("cp");
     
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



