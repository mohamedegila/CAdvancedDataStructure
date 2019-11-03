#ifndef QUEUE_H_
#define QUEUE_H_

/*********************************************************************************
 *                      Creating Node To use it with Queue
 *
 ********************************************************************************/
typedef struct qu_Node queue_Node;
struct qu_Node{
    int Data;
    queue_Node* Next;
};

 /*********************************************************************************
 *                      Creating Queue Information
 *
 ********************************************************************************/
typedef struct{
    int maxSize;
    int CounterSize;
    queue_Node * Head_Ptr ;
    queue_Node * Tail_Ptr ;
}ST_queueInfo;

/*********************************************************************************
 * Function: createQueue
 * @param: info, pinter to structure that hold queue informations
 * @param: maxSize, variable to hold maxSize of queues
 * Description: Function to create Queue depending on Node design
 ********************************************************************************/
void createQueue(ST_queueInfo* info, int maxSize);

/*********************************************************************************
 * Function: enqueue
 * @param: info, pinter to structure that hold queue informations
 * @param: data, Data to insert it into Queue list
 * Description: Function to insert Data into queue
 ********************************************************************************/
void enqueue(ST_queueInfo *info, int data);

/*********************************************************************************
 * Function: dequeue
 * @param: info, pinter to structure that hold queue informations
 * @param: data, Pointer to an integer used to return data back on it from queue insert it into Queue list
 * Description: Function to read&clear Data from queue
 ********************************************************************************/
void dequeue(ST_queueInfo *info, int* data);

#endif // QUEUE_H_
