 /* Linked List */
#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"

char flag=1;
int list_counter=0;


char createList(ST_list *list){
    if(!flag){
        list->list_counter=0;
        flag=1;
    }
    list->node_counter=0;
    list->Head_Ptr = NULL;
    list_counter++;
    return list_counter;
}

char insertToList(ST_list *listHead, unsigned char position, int data){

    char ret_value = 1;
    int copy_counter = position-1;
  if(position <= (listHead->node_counter)){
       LS_Node* node = (LS_Node*)malloc(sizeof(LS_Node));
       LS_Node* temp = listHead->Head_Ptr;
	      node->data=data;
          node->Next=NULL;
       if(position==0){

               node->Next = listHead->Head_Ptr;
			   listHead->Head_Ptr = node;
               listHead->node_counter+=1;
       }

       else {
            while(copy_counter){
                temp=temp->Next;
                copy_counter--;
            }
               listHead->node_counter+=1;
               node->Next=temp->Next;
               temp->Next=node;
       }

  }
    else{
        ret_value=0;
    }
    return ret_value;
}

char deleteFromList(ST_list *listHead, unsigned char position, int* data){

    char return_value = 1;
    if((position-1)<=(listHead->node_counter)){
         LS_Node* temp = listHead->Head_Ptr;
         LS_Node* temp1 = listHead->Head_Ptr;
         if(position==0){
            *data=temp->data;
             listHead->Head_Ptr=temp->Next;
             free(temp);
             listHead->node_counter--;
         }
         else if(position==1){
            temp1=temp1->Next;
            *data=temp1->data;
             temp->Next=temp1->Next;
             free(temp1);
             listHead->node_counter--;
         }
         else{
         position-=2;
         while(position){
            temp=temp->Next;
            position--;
         }
         temp1=temp->Next;
         *data=temp1->data;
         temp->Next=temp1->Next;
         free(temp1);
         listHead->node_counter--;
         }
    }
    else{
        return_value =0;
    }
    return return_value;
}

LS_Node* searchIntoList(ST_list *listHead, int data){
    int ret = 0;
	LS_Node* temp =listHead->Head_Ptr;
	LS_Node* temp1 = (LS_Node*)malloc(sizeof(LS_Node));
    temp1->data=-1;
    temp1->Next=NULL;
        while(temp!=NULL){
            if(temp->data == data){
                ret=1;
                break;
            }
            else {
                temp=temp->Next;
				flag--;
            }
        }
        if(!ret){
           return temp1;
        }    //means that Number Not Found
        free(temp1);
        return temp;
}
char sortList(ST_list *listHead){

     int Temp_Data;
     int ret_value =0;
     if((listHead->node_counter) >1){
     LS_Node* temp ,* temp1;
     temp =  listHead->Head_Ptr;
     temp1=temp->Next;
     while(temp != NULL){
            temp1=temp->Next;
        while(temp1 != NULL){
            if((temp->data) > (temp1->data)){
                Temp_Data = temp->data;
                temp->data = temp1->data;
                temp1->data = Temp_Data;
            }
            else {
                temp1=temp1->Next;
            }
        }
        temp=temp->Next;
     }
        ret_value =1;
     }
     else if ((listHead->node_counter) == 1){
            ret_value = 1;
     }

     else{

     }
     return ret_value;
}

void reverseList(ST_list *listHead){

    LS_Node* temp ,* pre,*Next;
    temp =  listHead->Head_Ptr;
    pre=NULL;

    while(temp !=NULL){
       Next=temp->Next;
       temp->Next=pre;
       pre = temp;
       temp = Next;
    }
    listHead->Head_Ptr=pre;
}

void LS_print_All(ST_list *listHead)
{
    LS_Node* temp =listHead->Head_Ptr;
    printf("Number Of LS : %d\n",listHead->node_counter);
    while(temp !=NULL)
    {
        printf(" %d" ,temp->data);
        temp=temp->Next;
    }
    printf("\n");
}
