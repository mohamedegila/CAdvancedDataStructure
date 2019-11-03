#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

int main()
{
    ST_stackInfo info;
    int Length_Of_parentheses;
    int Value_Of_parentheses;
    int Val,i;
    createStack(&info);
    printf("How Many parentheses? ");
    scanf("%d",&Length_Of_parentheses);
    printf("Enter parentheses :");
   for(i = Length_Of_parentheses;i>0;i-- ){
       scanf("%S",&Value_Of_parentheses);
       getchar();
      push(&info,Value_Of_parentheses);
    }
   pop(&info,&Val);
    printf("%d ",Val);


    return 0;
}
