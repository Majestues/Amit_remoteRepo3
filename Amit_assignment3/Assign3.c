#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1 = 0;
    float num2 = 0;
    char operation;

    printf("Please enter First number: ");
    scanf("%f",&num1);

    printf("\n");

    fflush(stdin);
    printf("Please enter an operator: ");
    scanf("%c",&operation);


    printf("\n");

    printf("Please enter Second number: ");
    scanf("%f",&num2);

    printf("\n");

    switch(operation){
        case '+':
            printf("The result of %f + %f = %f",num1,num2, num1 + num2);
            break;

        case '-':
            printf("The result of %f - %f = %f",num1,num2, num1 - num2);
            break;

        case '*':
            printf("The result of %f * %f = %f",num1,num2, num1 * num2);
            break;

        case '/':
            printf("The result of %f / %f = %f",num1,num2, num1 / num2);
            break;

        default:
            printf("Invalid entry, try again");
            break;
    }


    return 0;
}




