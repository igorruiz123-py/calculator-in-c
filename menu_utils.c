#include <stdio.h>
#include "menu_utils.h"
#include "math_utils.h"

void menu(){

    int num_1;
    int num_2;

    int option;


    char options[6][50] = {

        "1 - Addition",
        "2 - Subtraction",
        "3 - Multiplication",
        "4 - Division",
        "5 - Power",
        "6 - Exit"
    };

    while (1){

        printf("*** Welcome to your calculator *** \n");
        printf("\n");

        printf("Type a number: ");
        scanf("%d", &num_1);
        printf("\n");

        printf("Type another number: ");
        scanf("%d", &num_2);
        printf("\n");

        for (int i = 0; i < 6; i++){
            printf("%s \n", options[i]);
        }

        printf("\n");
        printf("Choose a option index: ");
        scanf("%d", &option);
        printf("\n");


        if (option == 1){
            int result = sum(num_1, num_2);

            printf("The result of your sum is %d", result);
            printf("\n");
        }

        else if (option == 2){
            int result = sub(num_1, num_2);

            printf("The result of your subtraction is %d", result);
            printf("\n");
        }

        else if (option == 3){
            int result = mult(num_1, num_2);

            printf("The result of your multiplication is %d", result);
            printf("\n");
        }

        else if (option == 4){

            if (num_2 == 0){
                printf("Divide by 0 is not possible");
                printf("\n");
                continue;
            }

            float result = divide(num_1, num_2);

            printf("The result of your division is %.2f", result);
            printf("\n");
        }

        else if (option == 5){
            int result = power(num_1, num_2);

            printf("The result of your power is %d", result);
            printf("\n");
        }

        else if (option == 6){
            break;
        }

        else {
            printf("Type only valid options");
            printf("\n");
        }

    }
}