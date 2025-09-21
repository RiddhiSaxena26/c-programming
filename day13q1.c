#include<stdio.h>
#include<math.h>

int main() {
    int num1,num2,ans=0;
    char operator;
    printf("enter number 1 : ");
    scanf("%d",&num1 );

    printf("enter number 2 : ");
    scanf("%d", &num2);

    printf("OPERATIONS ARE : \n+ : for addition \n- : for subtraction \n* : for multiplication \n/ : to find quotient \npercentage : to find remainder\n");

    printf("enter operation to be done between number 1 and 2: ");
    scanf("%c",&operator);

    switch(operator){
        case '+' : {
            ans= num1+num2;
            printf("Your answer is : %d",ans);
        }
        case '-' : {
            ans= num1-num2;
            printf("Your answer is : %d",ans);            
        }
        case '*' : {
            ans= num1*num2;
            printf("Your answer is : %d",ans);            
        }
        case '/' : {
            ans= num1/num2;
            printf("Your answer is : %d",ans);            
        }
        case '%' : {
            ans= num1%num2;
            printf("Your answer is : %d",ans);            
        }
        default : {
            printf("error");
        }
    }
    return 0;
}
    