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



void splash (void)
{

    system("cls");
    printf("...................Project Loading Complete!..........\n\n\n");
    sleep(1);
    printf("-------------Press any key to continue-------------\n");
    getchar();
    system("cls");


char ris[]=" \n"
"                                                                                 __      __       .__                                     __                                                                    \n"
"                                                                                /  \\    /  \\ ____ |  |   ____  ____   _____   ____      _/  |_ ____                                                             \n"
"                                                                                \\   \\/\\/   _/ __ \\|  | _/ ___\\/  _ \\ /     \\_/ __ \\     \\   __/  _ \\                                                            \n"
"                                                                                 \\        /\\  ___/|  |_\\  \\__(  <_> |  Y Y  \\  ___/      |  |(  <_> )                                                           \n"
"                                                                                  \\__/\\  /  \\___  |____/\\___  \\____/|__|_|  /\\___  >     |__| \\____/                                                            \n"
"                                                                                       \\/       \\/          \\/            \\/     \\/                                                                             \n"
"                                                                                                                                                                                                                \n"
"        __________                __                                     __          _____                          ____                               __         _________              __                     \n"
"        \\______   \\ ____   ______/  |______   __ ______________    _____/  |_       /     \\ _____    ____ _____    / ___\\  ____   _____   ____   _____/  |_      /   ________.__. ______/  |_  ____   _____     \n"
"         |       __/ __ \\ /  ___\\   __\\__  \\ |  |  \\_  __ \\__  \\  /    \\   __\\     /  \\ /  \\\\__  \\  /    \\\\__  \\  / /_/  _/ __ \\ /     \\_/ __ \\ /    \\   __\\     \\_____  <   |  |/  ___\\   ___/ __ \\ /     \\    \n"
"         |    |   \\  ___/ \\___ \\ |  |  / __ \\|  |  /|  | \\// __ \\|   |  |  |      /    Y    \\/ __ \\|   |  \\/ __ \\_\\___  /\\  ___/|  Y Y  \\  ___/|   |  |  |       /        \\___  |\\___ \\ |  | \\  ___/|  Y Y  \\   \n"
"         |____|_  /\\___  /____  >|__| (____  |____/ |__|  (____  |___|  |__|      \\____|__  (____  |___|  (____  /_____/  \\___  |__|_|  /\\___  |___|  |__|      /_______  / ____/____  >|__|  \\___  |__|_|  /   \n"
"                \\/     \\/     \\/           \\/                  \\/     \\/                  \\/     \\/     \\/     \\/             \\/      \\/     \\/     \\/                  \\/\\/         \\/           \\/      \\/    \n";

  // Showing Ascii text
    for(int i=0;i<strlen(ris);i++)
    {

    printf("%c",ris[i]);
    if(ris[i]=='\n')
    {
        usleep(353535);
    }

   }
   printf("\n\n\n\n\n");
   sleep(1);

   FILE *sp;
   sp=fopen("image.txt","r");
   char img[1000];

   //reading image from text file

   while(!feof(sp))
   {
       fgets(img,sizeof(sp),sp);
       printf("%s",img);

   }
printf("\n\n\n\n");
   fclose(sp);
   printf("...............Press any key to continue............\n");
   getchar();




}


