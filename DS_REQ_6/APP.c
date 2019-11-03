#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "database.h"
#include "App.h"

static int Entered_value,Local_Data,Local_Postion;
static int Copy_Entered_value;
static int Response,ret;
int Return_value;

ST_queueInfo info;


void Main_Screen(void){

    createQueue(&info,10);
    printf("\nPlease Enter Number of Queries:");
    scanf("%d",&Entered_value);
    printf("\nPlease choose the queries:");
    printf("\n1- Create DataBase.");
    printf("\n2- Insert to DataBase.");
    printf("\n3- Delete from the DataBase.");
    printf("\n4- Search into the DataBase.");
    printf("\n5- Sort the DataBase.");
    printf("\n6- Operation on two nodes.");
    printf("\n7- show  DataBase Element.");
    printf("\nWaiting for your response….\n");
    Copy_Entered_value = Entered_value;
    while(Copy_Entered_value){
        scanf("%d",&Response);
        enqueue(&info,Response);
        Copy_Entered_value--;
    }
}

void Response_Screen(void){

    Copy_Entered_value = Entered_value;
    while(Copy_Entered_value){
        dequeue(&info,&Response);

        switch(Response){
            case 1:
                createDatabase(&Return_value);
                if(Return_value != -1){
                    //system("cls");
                    printf("\nCreating a DataBase...");
                    printf("\nDataBase Created Successfully!!");
                    printf("\nThe number of DBs is %d.",Return_value);
                }
                else{
                    printf("\nThere Is No Memory");
                    printf("\nDataBase Not Created!!");
                }
                break;
            case 2:
                //system("cls");
                printf("\nPlease Select DB to insert into:");
                scanf("%d",&Response);
                printf("\nPlease Enter Data to insert:");
                scanf("%d",&Local_Data);
                printf("\nPlease enter the position to insert into:");
                scanf("%d",&Local_Postion);
                ret=insertToDatabase(Response,Local_Postion,Local_Data,&Return_value);
                if(ret){
                    if(Return_value)
                        printf("\nData Inserted successfully!!");
                    else
                        printf("\nData Not Inserted successfully!!");
                }
                else
                    printf("\nInvaild DataBase");
                break;
            case 3:
                printf("\n Please Select DB to delete from:");
                scanf("%d",&Response);
                printf("\nPlease enter the position to delete from:");
                scanf("%d",&Local_Postion);
                ret=deleteFromDatabase(Response,Local_Postion,&Local_Data,&Return_value);
                if(ret){
                    if(Return_value)
                         printf("\nData:%d at Postion:%d Deleted successfully!!",Local_Data,Local_Postion);
                    else
                        printf("\nInvaild Postion" );
                }
                else
                    printf("\nInvaild DataBase");
                break;
            case 4:
                //system("cls");
                printf("\n Please Select DB to Search into:");
                scanf("%d",&Response);
                printf("\nPlease enter the Data You want to found:");
                scanf("%d",&Local_Data);
                ret = searchIntoDatabase(Response,Local_Data,&Return_value);
                if(ret){
                    if(Return_value !=-1)
                         printf("\nData:%d Found!!",Local_Data);
                    else
                        printf("\nData:%d Not Found!!",Local_Data);
                }
                else
                    printf("\nInvaild DataBase");
                break;
            case 5:
                //system("cls");
                printf("\n Please Select DB to Sort it:");
                scanf("%d",&Response);
                ret = sortDs(Response,&Return_value);
                if(ret){
                    if(Return_value)
                         printf("\nDataBase Sorted!!");
                    else
                        printf("\nDataBase Not Sorted!!");
                }
                else
                    printf("\nInvaild DataBase");
                break;
            case 6:
                printf("\nIam Trying To Handel This Case.");
                break;
            case 7:
                printf("\n Please Select DB to print:");
                scanf("%d",&Response);
                ret = DS_print_All(Response);
                if(!ret)
                    printf("\nInvaild DataBase");
                break;
                break;
        }
        Copy_Entered_value--;
    }
}
