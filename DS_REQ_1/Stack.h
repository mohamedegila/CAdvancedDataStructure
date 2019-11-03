#ifndef STACK_H_
#define STACK_H_
typedef struct Node Stack_Node;
struct Node{
    int Data;
    Stack_Node* Next;
};



typedef struct{
    int size;
    Stack_Node * SP_Ptr ;
}ST_stackInfo;


void createStack(ST_stackInfo *info);
char push(ST_stackInfo *info, int data);
char pop(ST_stackInfo *info, int* data);
void Top(int* Value);

#endif // STACK_H_
