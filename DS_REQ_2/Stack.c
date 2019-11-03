#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
#define NULL_PTR  ((void*)0)

void createStack(ST_stackInfo *info){

    info->size = 0;
    info->SP_Ptr = NULL;
}
char push(ST_stackInfo *info, int data){

    Stack_Node* node = (Stack_Node*)malloc(sizeof(Stack_Node));
    if(!info->SP_Ptr){
        info->SP_Ptr = node;
        node->Data=data;
    }
    else{
        Stack_Node* tmp = info->SP_Ptr;
        info->SP_Ptr = node;
        node->Data=data;
        node->Next = tmp;
    }
    info->size += 1;
    return 0;
}


char pop(ST_stackInfo *info, int* data){
      char ret_value =1;
      if((info->size)!=0){
           Stack_Node* tmp = info->SP_Ptr;
            *data=info->SP_Ptr->Data;
            info->SP_Ptr=info->SP_Ptr->Next;
            info->size -= 1;
      }
   else{
     *data=-505;
   }
    return ret_value;
}

