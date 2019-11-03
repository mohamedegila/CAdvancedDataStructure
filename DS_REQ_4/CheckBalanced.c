
#include "CheckBalanced.h"

#include "Stack.h"
ST_stackInfo info;
unsigned char checkForBalancedParantheses(char* expression){

    char flag,flag1,flag2=0;
    int Value;
    char ret_value=0;
    char i=0;
    createStack(&info);
    for(i= 0 ;i<NUMBER_OF_EXPRATION ; i++){
        if((expression[i] == 123 ) | (expression[i] == 40 ) | (expression[i] == 91 )){
            //Push(expression[i]);
            push(&info,expression[i]);
        }
        else{
            pop(&info,&Value);
            if(Value != (-505)){
                flag=expression[i] - Value;
                        switch(flag){
                            case 1:
                                pop(&info,&Value);
                                break;
                            case 2:
                                pop(&info,&Value);
                                break;
                            default:
                                i=NUMBER_OF_EXPRATION;
                                break;
                        }
            }

         }
        }
         pop(&info,&Value);
   if(Value == (-505)){
    ret_value =1;
   }
 return ret_value;
}
