#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

ST_queueInfo info;
int main()
{
    int val;
    createQueue(&info,5);
    enqueue(&info,11);
    enqueue(&info,2);
    enqueue(&info,3);
    dequeue(&info,&val) ;
    dequeue(&info,&val) ;
    dequeue(&info,&val) ;
     dequeue(&info,&val) ;
    printf("%d ",val);
    return 0;
}
