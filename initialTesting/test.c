#include <stdio.h>

/* function decleration must come before the call to the
main() function. */
int count(int x, int y) {
    return x + y;
}

int main() {

    printf("hello \n");

    int val = count(10,13);
    printf("count return | %d \n", val);
    
    /* a floating point type holds a decimal or real number
    to 7 significant digits. It doesnt matter where the 
    decimal is (142480.0 or 0.0000018248), a float variable
    will always maintain 7 significant digits. */
    float num = 123.4567;

    /* a double has similar characteristics to a floating point
    number, however, a double type maintains 15 significant digits. */
    double dNum = 123.4567890123456;
    
    
    
    return 0;
}

