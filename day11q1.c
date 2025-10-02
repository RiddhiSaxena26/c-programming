#include<stdio.h>
#include<math.h>
int main (){
    int day;
    printf("please enter number (1-12): ");
    scanf("%d",&day);
    switch(day){
        case 1 : {
            printf("january\31 days");
            break;
        }
        case 2: {
            printf("feburary\n28 days");
            break;
        }
        case 3 : {
            printf("march\n31 days");
            break;
        }
        case 4 : {
            printf("april\n30days");
            break;
        }
        case 5 : {
            printf("may\n31days");
            break;
        }
        case 6 : {
            printf("june\n30days");
            break;
        }
        case 7 : {
            printf("july\n31days");
            break;
        }
        case 8 : {
            printf("august\n31days");
            break;
        }
        case 9 : {
            printf("september\n30days");
            break;
        }
        case 10 : {
            printf("october\n31days");
            break;
        }
        case 11 : {
            printf("november\n30days");
            break;
        }
        case 12 : {
            printf("december\n31days");
            break;
        }
       
        default : {
            printf("number should be between 1-12");
        }
    }
    
    
    return 0;    
 }

