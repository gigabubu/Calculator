#include <stdio.h>
#include <stdlib.h>

//driver code

int main(){

    char op; //variabile associata all'operatore
    float n1, n2; //operandi
    float res; //le divizioni possono non essere intere

    while(1){

        res = 0;

        printf("enter the operation you wanna do: *,+,-,/ \n\n");
        printf("if you wanna exit press x\n\n");
        printf("if you wanna clear press c\n\n");

        scanf("%c",&op);

        if(op == 'x'){
            exit(0);
        } else if (op == 'c'){
            system("clear");
        }

        printf("\nInsert the two number \n\n");

        scanf("%f",&n1);
        scanf("%f",&n2);

        switch (op) {

            case '+': 
                res = n1 + n2;
                printf("\nil risultato è --> %f \n\n", res);
                getchar();
                break;
            
            case '-':
                res = n1 - n2;
                printf("\nil risultato è --> %f \n\n", res);
                getchar();
                break;
            
            case '*':
                res = n1*n2;
                printf("\nil risultato è --> %f \n\n", res);
                getchar();
                break;

            case '/':
                res = n1/n2;
                printf("\nil risultato è --> %f \n\n", res);
                getchar();
                break;

            default: 
                printf("\nplease enter a valid operator\n");
                

        }

    }


}