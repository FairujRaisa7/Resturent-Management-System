#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<dos.h>


void recursiveLoading(int progress) {
    //Loading bar
    // Base case: stop recursion when progress reaches 100%
    if (progress > 100) {
        return;
    }

    // Code to be executed in each iteration
    printf("Project is Loading [%d%%]", progress);
    fflush(stdout);
    usleep(10000);
    printf("\r");

    // Recursive call to the function with an incremented progress value
    recursiveLoading(progress + 1);
}
