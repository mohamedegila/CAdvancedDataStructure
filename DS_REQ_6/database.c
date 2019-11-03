#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"

#include "database.h"

static int  database_counter=0;

ST_list* list;

static void CorrectDBPosition(int DB_Number,ST_list* temp){

     while(DB_Number-1){
            temp++;
            DB_Number--;
        }
}

char createDatabase(int* Ptr_Return){
    char Return_value = OK;
    ST_list* temp=list;
    if(!database_counter){

        list = (ST_list*)malloc(sizeof(ST_list));
    }
    else{
        list=(ST_list*)realloc(list,((database_counter+1)*(sizeof(ST_list))));
    }
    if(list != NULL){
        *Ptr_Return = createList(list + database_counter);
        database_counter++;
    }
    else{
        *Ptr_Return =-1;
    }
    return Return_value;
}

char insertToDatabase(int DB_Number, unsigned char Data_position, int Data,int* Ptr_Return){

    char Return_value = OK;
    if(DB_Number <= database_counter){
        ST_list* temp=list;
        while(DB_Number-1){
            temp++;
            DB_Number--;
        }
        * Ptr_Return = insertToList(temp,Data_position,Data);
    }
    else{
       return NOT_OK;
    }
    return OK;
}

char deleteFromDatabase(int DB_Number, unsigned char Data_position, int * Data,int* Ptr_Return){

    if(DB_Number <= database_counter){
        ST_list* temp=list;
        while(DB_Number-1){
            temp++;
            DB_Number--;
        }
        *Ptr_Return = deleteFromList(temp,Data_position,Data);
    }
    else{
         return NOT_OK;
    }
    return OK;
}

char searchIntoDatabase(int DB_Number, int Data,int* Ptr_Return){

    ST_list* temp=list;
    LS_Node * temp_data;
    if(DB_Number <= database_counter){
            while(DB_Number-1){
            temp++;
            DB_Number--;
        }
        temp_data=searchIntoList(temp,Data);
        *Ptr_Return = temp_data->data;
    }
    else{
        return NOT_OK;
    }
    return OK;
}

char sortDs(int DB_Number,int* Ptr_Return){

    if(DB_Number <= database_counter){
        ST_list* temp=list;
        while(DB_Number-1){
            temp++;
            DB_Number--;
        }
        *Ptr_Return = sortList(temp);
    }
    else {
        return NOT_OK;
    }
    return OK;
}

char DS_print_All(int DB_Number){

    if(DB_Number <= database_counter){
        ST_list* temp=list;
        while(DB_Number-1){
            temp++;
            DB_Number--;
        }
        LS_print_All(temp);
    }
    /*
        the next step needed to terminate function
        once call DataBase Not exist
    */
    else{
        return NOT_OK;
    }
    return OK;
}
