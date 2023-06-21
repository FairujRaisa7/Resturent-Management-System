#include <stdio.h>
#include <stdlib.h>
#include"splash.h"
#include"login.h"
#include"menu.h"


struct order
{
    char name [50];
    int ite;
    int id;
    double price;
};



int main(void)
{
    recursiveLoading(0); //use of recursion
    splash();
    system("cls");
    login();

    system("D:\\rest.jpg");//picture location for showing


         FILE *bill;


    struct order ord[100];
    char user[100];
    char card[20];
    char pas[15];
    char srch[1000];
    int ch,payment;
    int i=1;
    char n;
    char inv="";
    double sum =0;
    struct Item items[100];
    int count = 0;

    // Add burgers to the list
    struct Item item1 = {1, "Mexican Sub Sandwich", 210};
    struct Item item2 = {2, "Dumplings (6 pcs)", 350};
    struct Item item3 = {3, "Chicken Burger", 230};
    struct Item item4 = {4, "Alfredo Pasta", 400};
    struct Item item5 = {5, "Cashewnut Salad", 199};
    struct Item item6 = {6, "Fish N Chips", 399};
    struct Item item7 = {7, "Kitkat Frappe", 259};


    items[count++] = item1;
    items[count++] = item2;
    items[count++] = item3;
    items[count++] = item4;
    items[count++] = item5;
    items[count++] = item6;
    items[count++] = item7;


    ord[1].price=210;
    ord[2].price=350;
    ord[3].price=230;
    ord[4].price=400;
    ord[5].price=199;
    ord[6].price=399;
    ord[7].price=259;


    while (1){  //loop for keep stay menubar till type 3

        system("cls");
        menu();

        printf("Enter Your Choise>>\n");
        fflush(stdin);
        scanf("%d",&ch);

        if(ch==1){

                system("D:\\food.jpg");

        // Display the burger list
        system("cls");
        display_item_list(items, count);
         printf("\n");

         i=1;
         sum=0;

        fflush(stdin);
        printf("Enter customer name\n");
        fgets(user,100,stdin);

    do{
       system("cls");
       display_item_list(items, count);

       printf("Enter Food Id\n");
       scanf("%d",&ord[i].id);

       printf("Enter Food Quantity\n");
       scanf("%d",&ord[i].ite);

       //matching id and calculate money for burger
        if (ord[i].id==1){
        sum=sum + (ord[1].price*ord[i].ite);
        strcpy(ord[i].name,"Mexican Sub Sandwich");
     }
     else if(ord[i].id==2){
        sum=sum + (ord[2].price*ord[i].ite);
        strcpy(ord[i].name,"Dumplings (6 pcs)");
     }
     else if(ord[i].id==3){
        sum=sum + (ord[3].price*ord[i].ite);
        strcpy(ord[i].name,"Chicken Burger");
     }
     else if(ord[i].id==4){
        sum=sum + (ord[4].price*ord[i].ite);
        strcpy(ord[i].name,"Alfredo Pasta");
     }
     else if(ord[i].id==5){
        sum=sum + (ord[5].price*ord[i].ite);
        strcpy(ord[i].name,"Cashewnut Salad");
     }
     else if(ord[i].id==6){
        sum=sum + (ord[6].price*ord[i].ite);
        strcpy(ord[i].name,"Fish N Chips");
     }
     else if(ord[i].id==7){
        sum=sum + (ord[7].price*ord[i].ite);
        strcpy(ord[i].name,"Kitkat Frappe");
     }
     else {
        printf("Wrong keyword\n");
        sleep(1);

     }


     system("cls");
     printf(" \n\n\t\t\t     Total Payable Amount is = %f\n",sum);
     printf("For Order more or not..Type y/n\n");
     fflush(stdin);
     scanf(" %c",&n);
     i++;
    }while(n!='n'); //conitune order untill type n


    system("cls");

    system("D:\\raisa.mp3");

    printf("\t\t\t\t\t............Payment Getway.........\n\n\n");
    printf("==>1.Pay Cash\n");
    printf("==>2.Credit Card\n\n");
    printf("\tEnter your choice>>\n");


    scanf("%d",&payment);

    if(payment==1){
            system("cls");

        printf(".......Successfully paid!!!!!!!!\n");
        printf("Do you want to save invoice(y/n)\n");
        scanf(" %c",&inv);

         if(inv=='y'){ //Saving Bill IN file

          bill=fopen("bill.txt","a+");
          fprintf(bill,"%51s\n","C&S Invoice Information");
          fprintf(bill,"%51s\n","=======================");
          fprintf(bill,"\n\n");
          fprintf(bill," Customar Name: %s",user);
          fprintf(bill," Payment Type :Cash\n\n");
          fprintf(bill,"--------------------------------------------------------------------------------\n");
          fprintf(bill," %-10s %-20s %-10s\t %s\t%s  \n","ID","Name","Quantity","Unit Price","Total");
          fprintf(bill,"--------------------------------------------------------------------------------\n");

          for(int j=1;j<i;j++){
          fprintf(bill," %-10d %-20s %-10d\t %.2f\t\t%.2f\n",ord[j].id,ord[j].name,ord[j].ite,ord[j].price,(ord[j].price*ord[j].ite));

          }

          fprintf(bill,"--------------------------------------------------------------------------------\n");
          fprintf(bill,"\t\t\t\t\t\t\tGrand Total=%.2f Tk",sum);
          fprintf(bill,"\n\n");
          printf("\t\t\t..........Successfully Saved Bill..............\n");
          sleep(1);
          fclose(bill);


        }

        system("cls");
                printf(">>... Main Menu Loading\n");
        sleep(1);

        }



    else if(payment==2){
            system("cls");

        printf("Enter Card Number:\n");
        scanf("%s",card);
        system("cls");

        printf("Enter passwod:\n");
        scanf("%s",pas);
        system("cls");


        printf("\t\t\t............payment Successful!!!!!!\n\n\n");
        printf("Do you want to save invoice(y/n)\n");
        fflush(stdin);

        scanf(" %c",&inv);

         if(inv=='y'){ //bill save for option 2

                bill=fopen("bill.txt","a+");
          fprintf(bill,"%51s\n","C&S Invoice Information");
          fprintf(bill,"%51s\n","=======================");
          fprintf(bill,"\n\n");
          fprintf(bill," Customar Name: %s",user);
          fprintf(bill," Payment Type :Card\n\n");
          fprintf(bill,"--------------------------------------------------------------------------------\n");
          fprintf(bill," %-10s %-20s %-10s\t %s\t%s  \n","ID","Name","Quantity","Unit Price","Total");
          fprintf(bill,"--------------------------------------------------------------------------------\n");

          for(int j=1;j<i;j++){
          fprintf(bill," %-10d %-20s %-10d\t %.2f\t\t%.2f\n",ord[j].id,ord[j].name,ord[j].ite,ord[j].price,(ord[j].price*ord[j].ite));

          }

          fprintf(bill,"--------------------------------------------------------------------------------\n");
          fprintf(bill,"\t\t\t\t\t\t\tGrand Total=%.2f Tk",sum);
          fprintf(bill,"\n\n");
          printf("\t\t\t..........Successfully Saved Bill..............\n");
          sleep(1);
          fclose(bill);

    }
            else {
                printf(">>... Main Menu Loading\n");
        sleep(1);

        }



           }
           else {
            printf("!!!!!Wrong keyword\n");
            printf("Main menu Loading\n");
            sleep(1);
           }


    }



    else if(ch==2) //Showing bill
    {

         system("cls");
         bill=fopen("bill.txt","r");

         if(bill==NULL){
            printf("==>!!Invoice Deleted\n");
            fclose(bill);
            sleep(2);
         }


       else {

          printf("==>Loading Invoice...\n");
          sleep(2);
          system("cls");


          while(!feof(bill)){ //printing bill from file

            fgets(srch,sizeof(srch),bill);
            printf("%s",srch);

          }

          fclose(bill);
          printf("\n\n\n\n>>>>>>Enter any key to Return Main Menu>>>>>>>>\n");
          fflush(stdin);
          getchar();

         }
    }


     else if(ch==3){ //delet all bill or file

            system("cls");
            remove("bill.txt");
                printf("==> All Invoice Deleted Successfully!!\n");
            sleep(2);

         }




      else if (ch==4){
        exit_program();
         }



        else if(ch!=1||ch!=2||ch!=3||ch!=4){

        system("cls");
        printf("\n");
        printf("Invalid keyword\n\n");
        sleep(1);
       }
    }

    return 0;
}
