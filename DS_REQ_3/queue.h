#ifndef QUEUE_H_
#define QUEUE_H_
typedef struct Node queue_Node;
struct Node{
    int Data;
    queue_Node* Next;
};



typedef struct{
    int maxSize;
    int CounterSize;
    queue_Node * Head_Ptr ;
    queue_Node * Tail_Ptr ;
}ST_queueInfo;


void createQueue(ST_queueInfo* info, int maxSize);
void enqueue(ST_queueInfo *info, int data);
void dequeue(ST_queueInfo *info, int* data);

#endif // QUEUE_H_
