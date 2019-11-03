#ifndef    LINKEDLIST_H__
#define    LINKEDLIST_H__

/*********************************************************************************
 *                      Creating Node To use it with lists
 *
 ********************************************************************************/
typedef struct ls_Node LS_Node;
struct  ls_Node
 {
	   int data;
	   LS_Node * Next;
 };
 /*********************************************************************************
 *                      Creating list
 *
 ********************************************************************************/
 typedef struct{
    int node_counter;
    int list_counter;
    LS_Node * Head_Ptr ;
}ST_list;


char createList(ST_list *list);
char insertToList(ST_list *listHead, unsigned char position, int data);
char deleteFromList(ST_list *listHead, unsigned char position, int* data);
LS_Node* searchIntoList(ST_list *listHead, int data);
char sortList(ST_list *listHead);
void reverseList(ST_list *listHead);
void LS_print_All(ST_list *listHead);

#endif //LINKEDLIST_H__
