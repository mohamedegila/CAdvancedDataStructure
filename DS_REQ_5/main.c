#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

 ST_list LS_info;
int main()
{
    int val;
    LS_Node * temp,*temp2;
    createList(&LS_info);
    insertToList(&LS_info,0,22);
    insertToList(&LS_info,1,2);

    LS_print_All(&LS_info);
	//temp2 = searchIntoList(&LS_info,26);
	//printf("temp2 %d \n",temp2->data);
   // deleteFromList(&LS_info,6,&val);
   //reverseList(&LS_info);
    sortList(&LS_info);
    LS_print_All(&LS_info);
    temp = searchIntoList(&LS_info,220);
    //printf("\n %d",val);
    printf("temp %d \n",temp->data);

    return 0;
}
