#ifndef    LINKEDLIST_H__
#define    LINKEDLIST_H__

 #include <stdio.h>
 #include <stdlib.h>

typedef struct Node LS_Node;
struct  Node
 {
	   int data;
	   LS_Node * Next;
 };
 typedef struct{
    LS_Node * Head_Ptr ;
}ST_list;



// void insert_Node(node * );
 //void print_All(void);
 //void print_Node(int );

char createList(ST_list *list);
char insertToList(ST_list *listHead, unsigned char position, int data);
void deleteFromList(ST_list *listHead, unsigned char position, int* data);
LS_Node* searchIntoList(ST_list *listHead, int data);
void sortList(ST_list *listHead);
void reverseList(ST_list *listHead);


void LS_print_All(ST_list *listHead);

  #endif //LINKEDLIST_H__
