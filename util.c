#include "util.h"

int divide(int numerator, int denominator){

    if(denominator == 0){
        
        puts("\nERROR: Division by zero exception.");
        exit(EXIT_FAILURE);

    }else{
        
        return numerator/denominator;
    }
}

int power(int base, int exponent){

    if(exponent == 0){

        return 1;

    }else if(exponent > 0){

        int i, temp;

        temp = base;
        for(i=1; i<exponent; i++){

            temp = temp * base;
        }

        return temp;

    }else if(exponent < 0){

        puts("\nERROR. The result is not integer.");
        exit(EXIT_FAILURE);

    }else{

        puts("\nERROR. Unexpected error.");
        exit(EXIT_FAILURE);
    }
}