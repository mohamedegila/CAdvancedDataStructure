#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "Stack.h"

#include "CheckBalanced.h"

#define LERNGTH_OF_EXPRATION  11


    ST_queueInfo qu_info;
    ST_stackInfo st_info;

long long evaluate(char* expression);

int main(void){

    long long return_value;
    char  ptr[LERNGTH_OF_EXPRATION]={'(','(','2','+','8',')','*','2','/','4',')'};
    createQueue(&qu_info,20);
    createStack(&st_info);
    return_value = evaluate(ptr);
    printf("%d ",return_value);
    return 0;
}

long long evaluate(char* expression){

    int counter=0;
    int i,s=0;
    int temp;
    int exp;
    int Num1;
    int Num2;
    long long result;
    for(i=0;i<LERNGTH_OF_EXPRATION;i++){
        if(((expression[i] == 42 ) || (expression[i] == 43 ) || (expression[i] == 45 ) || (expression[i] == 47))){
                 enqueue(&qu_info,expression[i]);

        }
        else if((expression[i] >= 48 )&& (expression[i] <= 57 )){
                enqueue(&qu_info,((expression[i]-'0')));
                    counter++;
        }
    }
    dequeue(&qu_info,&Num2);
    counter-=1;
    result=(long long)Num2;
               while((counter>0)){
                    while((s <2)){
                            dequeue(&qu_info,&temp);
                        if((temp >=0)&&(temp <=9)){
                                Num1=temp;
                            }
                        else{
                            exp=temp;
                        }
                        s++;
                    }
                    counter--;
                    s=0;
                switch(exp){
                case 42:
                    result=result*Num1;
                    break;
               case 43:
                    result=result+Num1;
                    break;
               case 45:
                    result=result-Num1;
                    break;
               case 47:
                    result=result/Num1;
                    break;
               default:
                break;
                }
            }
    return result;
}
