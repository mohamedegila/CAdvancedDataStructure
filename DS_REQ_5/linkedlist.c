 /* Linked List */

#include "linkedlist.h"

int  counter=0;

char createList(ST_list *list){
    list->Head_Ptr = NULL;
}

char insertToList(ST_list *listHead, unsigned char position, int data){

    char ret_value = 1;
    int copy_counter = position-1;
  if(position <= counter){
       LS_Node* node = (LS_Node*)malloc(sizeof(LS_Node));
       LS_Node* temp = listHead->Head_Ptr;
	      node->data=data;
          node->Next=NULL;
       if(position==0){

               node->Next = listHead->Head_Ptr;
			   listHead->Head_Ptr = node;
               counter++;
       }

       else {
            while(copy_counter){
                temp=temp->Next;
                copy_counter--;
            }
               counter++;
               node->Next=temp->Next;
               temp->Next=node;      
       }

  }
    else{
        ret_value=0;
    }
    return ret_value;
}

void deleteFromList(ST_list *listHead, unsigned char position, int* data){

    if((position)<=counter){
         LS_Node* temp = listHead->Head_Ptr;
         LS_Node* temp1 = listHead->Head_Ptr;
         if(position==0){
            *data=temp->data;
             listHead->Head_Ptr=temp->Next;
             free(temp);
             counter--;
         }
         else if(position==1){
            temp1=temp1->Next;
            *data=temp1->data;
             temp->Next=temp1->Next;
             free(temp1);
             counter--;
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
         counter--;
         }
    }
}

LS_Node* searchIntoList(ST_list *listHead, int data){
    int ret = 0;
    int flag=counter;
	LS_Node* temp =listHead->Head_Ptr;
	LS_Node* temp1;
	temp1->Next=NULL;
	temp1->data=-1;
        while(flag){
            if(temp->data == data){
                ret=1;
                break;
            }
            else {
                temp=temp->Next;
				flag--;
            }
        }
        if(!ret)
          return temp1; //means that Number Not Found

        return temp;
}
void sortList(ST_list *listHead){

     int Temp_Data;
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
    printf("Number Of LS : %d\n",counter);
    while(temp !=NULL)
    {
        printf(" %d" ,temp->data);
        temp=temp->Next;
    }
    printf("\n");
}
/*void insert_Node(node * temp){
   if(head==NULL)
   {
         temp->next=head;
         head=temp;
	     counter++;
   }
   else
   {
	   node *p=head;
        while(p->next != NULL)
		{
            p = p->next;
        }
        p->next = temp;
		temp->next=NULL;
		counter++;
   }
}*/

/*void print_All(void)
{
     node* temp =head;
    printf("Number Of Patients Is : %d\n",counter);
	printf("--------------------------\n");
	printf("Patient Data :\n");
	printf("--------------------\n");
	printf(" ID     NAME         AGE         GENDER\n");
	printf("-------------------------------------------\n");
    while(temp !=NULL)
    {
        printf(" %d" ,temp->id);
		printf("    %s" ,temp->name);
		printf("       %d" ,temp->age);
		printf("             %d\n" ,temp->gender);
		printf("-------------------------------------------\n");
        temp=temp->next;
    }
    printf("\n");
}*/

/*void print_Node(int  x)
{
						if(counter==0)
						{
									printf("No patient\n");
						}
						else
						{
											node*p=head;
											while(p != NULL)
															{
																		if(p->id==x)
																			{
												                                         printf("Found\n");
													                                     printf("-------------------------------------------\n");
													                                     printf(" %d" ,p->id);
		                                                                                 printf("    %s" ,p->name);
		                                                                                 printf("       %d" ,p->age);
		                                                                                 printf("             %d\n" ,p->gender);
		                                                                                 printf("-------------------------------------------\n");
													                                     break;
																			}
																		else
																				p = p->next;
																}
											if (p == NULL)
													printf("NOT Found\n");
						}
}*/

