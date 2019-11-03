#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#define NULL_PTR  ((void*)0)

void createQueue(ST_queueInfo* info, int maxSize){

    info->maxSize = maxSize;
    info->CounterSize = 0;
    info->Head_Ptr = NULL;
    info->Tail_Ptr=info->Head_Ptr;
}
void enqueue(ST_queueInfo *info, int data){

    if((info->CounterSize) < (info->maxSize)){
    queue_Node* node = (queue_Node*)malloc(sizeof(queue_Node));
    if(!info->Head_Ptr){
        info->Head_Ptr = node;
        node->Data=data;
        info->Tail_Ptr=info->Head_Ptr;
        node->Next = NULL;
    }
    else{
        //queue_Node* tmp = info->Tail_Ptr;
        info->Tail_Ptr->Next = node;
        node->Data=data;
        node->Next = NULL;
        info->Tail_Ptr= node;
    }
    info->CounterSize += 1;

    }
    else{

    }
}


void dequeue(ST_queueInfo *info, int* data){

      if((info->CounterSize)!=0){
            queue_Node* temp =info->Head_Ptr->Next;
            *data=info->Head_Ptr->Data;
            free(info->Head_Ptr);
            info->Head_Ptr=temp;
            info->CounterSize -= 1;
      }
   else{
     *data=-505;
   }
}

