#include <stdio.h>
#include <ctype.h> // library for isspace() function

/* function decleration must come before the call to the
main() function. */
int count(int x, int y) {
    return x + y;
}

/* function takes a user input and returns the text typed as well as the
number of non white space characters in the typed string. 

pre-conditions: function collapses when the return character '\n' is detected. */
void printInput() {
    printf("input text: ");

    int ch = 0, count = 0;
    while (ch != '\n') {
        ch = getchar();
        printf("%c", ch);
        
        if (isspace(ch) == 0) count++;
    }

    printf("readable text characters: %d",count);
}

void charCount() {
    printf("input character to search for: ");

    int chSrch = getchar();

    int ch = 0, count = 0;
    while (ch != '\n') {
        ch = getchar();
        
        if (ch == chSrch) count++;
    }
}

//________________________________________________________________//
int main() {

    printf("hello \n");

    int val = count(10,13);
    printf("count return | %d \n", val);
    
    /* a floating point type holds a decimal or real number
    to 7 significant digits. It doesnt matter where the 
    decimal is (142480.0 or 0.0000018248), a float variable
    will always maintain 7 significant digits. */
    // float num = 123.4567;

    /* a double has similar characteristics to a floating point
    number, however, a double type maintains 15 significant digits. */
    // double dNum = 123.4567890123456;
  
    printInput();
    
    return 0;
}

