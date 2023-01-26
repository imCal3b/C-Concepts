#include <stdio.h>
#include <ctype.h> // library for isspace() function

/* NOTE: By stating the function signature before main(), we can implement the code
below the main function */
int count(int x, int y);
void printInput();
void binaryConvert();
int arraySum(int *arr, size_t length);

int main() {

    printf("hello \n");

    int val = count(10,13);
    printf("count return | %d \n", val);
  
    printInput();
    binaryConvert();

    int intArray[] = {1,2,3,4,5};
    size_t arr_len = sizeof(intArray) / sizeof(int);
    printf("sum: %d | arr size: %llu | int size: %llu \n", arraySum(intArray,arr_len), sizeof(intArray), sizeof(int));
    
    return 0;
}

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

    printf("readable text characters: %d \n",count);
}

void binaryConvert() {
    //not working properly
    int input;

    printf("input an integer between 0-255: ");
    scanf("%d", &input);

    if (input < 0 || input > 255) return;

    char bin[] = {'0','b','0','0','0','0','0','0','0','0','\0'};
    size_t length = sizeof(bin) / sizeof(char);
    char *index = bin + length - 1;

    while (input > 0 || index > (bin+1)) {
        char bit = input % 2;
        printf("bit: %c \n", bit);
        *index = bit;
        input /= 2;
        index--;
    }

    puts(bin);
    //printf("binary: %s \n",bin);
}

int arraySum(int *arr, size_t length) {
    int sum = 0;
    for (int i=0;i < length; i++) {
        sum += *arr;
        arr++;
    }

    return sum;
}

//  NOTES
//________________________________________________________________
    /* a floating point type holds a decimal or real number
    to 7 significant digits. It doesnt matter where the 
    decimal is (142480.0 or 0.0000018248), a float variable
    will always maintain 7 significant digits. */
    // float num = 123.4567;

    /* a double has similar characteristics to a floating point
    number, however, a double type maintains 15 significant digits. */
    // double dNum = 123.4567890123456;