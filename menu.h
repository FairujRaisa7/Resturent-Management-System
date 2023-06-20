


#include<stdio.h>

struct Item {
    int id;
    char name[100];
    float price;
};

void display_item_list(struct Item *items, int count) {
    printf("\t\t\t~~~~~ Food List ~~~~~\n\n\n");
    printf("  %-7s %-20s %-10s\n", "ID", "Name", "Price");
    printf("----------------------------------------\n");

    for (int i = 0; i < count; i++) {
        struct Item item = items[i];
        printf("  %-7d %-20s %-10.2f\n", item.id, item.name, item.price);
        printf("-----------------------------------------\n");
    }
}


void menu (void)
{
    printf("==> 1. Food List & Order\n");
    printf("==> 2. Show All Invoice\n");
    printf("==> 3. Delet Invoice\n");
    printf("==> 4. Exit\n");
}



void exit_program(void)
 {
     system("cls");
    printf("                ...Thank You For Using Our System...\n");
    sleep(1);
    exit(0); // Terminate the program with a status code of 0
 }


