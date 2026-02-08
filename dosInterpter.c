#include <stdio.h> 
#include <signal.h>
#include <string.h>

int main(){
   char cmd[128];
   char arg1[128];
   char arg2[128];
   char *userInput; 
    print("enter DOS Commands ");
    print("use ctrl +c to exit program"); 
    //loop that repeats unless the user hits ctrl -c 

    while(1){
//get the users input and parses into the function
        fget(userInput);
        sscanf(userInput, "%s %s %s", cmd, arg1, arg2);
        dosInterpreter(cmd,arg1,arg2);
    }
    
}
