#include "util.h"

int calc(int first, char operation, int second);

int main(){

    int first, second;
    char operation;

    puts("\nEnter the expression below (i.e 2+3)");
    while(errno == 0){

        printf("\n/> ");
        scanf("%d%c%d", &first, &operation, &second);
        printf("\nResult: %d\n", calc(first, operation, second));
    }
    
    return 0;
}

int calc(int first, char operation, int second){

    switch(operation){

        case '+':

            return (first + second);
            break;

        case '-':

            return (first - second);
            break;

        case '*':

            return (first * second);
            break;

        case '/':
            
            return divide(first, second);
            break;

        case '^':

            return power(first, second);
            break;

        default:

            puts("\nERROR: Unexpected operation.");
            errno = EXIT_FAILURE;
            exit(EXIT_FAILURE);
    }

    return 0;
}