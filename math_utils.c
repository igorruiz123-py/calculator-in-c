#include "math_utils.h"

int sum(int x, int y){
    return x + y;
}

int sub(int x, int y){
    return x - y;
}

int mult(int x, int y){
    return x * y;
}

int divide(int x, int y){
    return x / y;
}

int power(int base, int exponent){
    int result = 1;

    for (int i = 0; i < exponent; i++){
        result *= base;
    }

    return result;
    
}