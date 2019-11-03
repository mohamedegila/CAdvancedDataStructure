#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

#include "CheckBalanced.h"


int main(void)
{
    char return_value;
    char  ptr[NUMBER_OF_EXPRATION]={'(','(',']','(',')',')'};
    return_value=checkForBalancedParantheses(ptr);
    if(return_value)
        printf("Correct");
    else
         printf("Not Correct");
    return 0;
}

