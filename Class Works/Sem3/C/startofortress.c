/*

*/

#include <stdio.h>

int whileLoop1();
int whileLoop2();
int whileLoop3();

int doWhileLoop1();
int doWhileLoop2();

int forLoop();

int main(){
    // whileLoop1();
    // whileLoop2();
    // whileLoop3();
    // doWhileLoop1();
    doWhileLoop2();
    // forLoop();
    return 0;
}

int whileLoop1() {
   
    /*
        1.Print all the natural numbers from 1 to n and n to 1 (use 2 while loops)
    */

    int n;
    int iterator = 0;
    printf("Enter a value for n: ");
    scanf("%i", n);

    while (iterator < n) {
        printf("%i ", iterator);
        iterator ++;
    }
    printf("\n");
    
    while (iterator >= 0) {
        printf("%i ", iterator);
        iterator --;
    }

    return 0;
}

int whileLoop2() {

    /*
        2.Print all the alphabets from a to z
    */

    int a = 65;

    while (a <= 91) {
        printf("%c ", a);
        a ++;
    }

    printf("\n");
    return 0;
}

int whileLoop3() {

    /*
        3.Print all the odd numbers and even numbers from 1 to 100
    */

    int i = 1;
    while (i < 101) {
        if (i % 2 == 0) {
            printf("%i is even\n", i);
            i ++;
            continue;
        }
        printf("%i is odd\n", i);
        i ++;
    }

    return 0;
}


int doWhileLoop1() {

    /*
        1.Count the number of digits in a number
    */

    int count = 0;
    int n;
    
    printf("Enter a number: ");
    scanf("%i", &n);

    if (n == 0) {
        return n + 1;
    }

    do {
        n /= 10;
        count ++;
    } while (n != 0);

    printf("\nTHE NUMBER OF DIGITS THAT %i HAS IS %i\n", n, count);
    return 0;
}

int doWhileLoop2() {

    /*
        2.Check whether number is POSITIVE, NEGATIVE or ZERO until user doesn't want to exit.
    */

    int number;
    int exit = 0;

    do {
        printf("Enter a number to find if it is positive, negative or zero. In order to exit give two spaces and enter 100: ");
        scanf("%i  %i", &number, &exit);
        if (exit == 100) {
            continue;;
        }

        if (number == 0) {
            printf("\nThe number is zero\n");
        } else if (number > 0) {
            printf("\nThe number is positive\n");
        } else {
            printf("\nThe number is negative\n");
        }

    } while (exit == 0);

    return 0;
}

int forLoop() {
    /*
        1.Print the multiplication table of a given number
    */

    int table;
    printf("Enter the multiplier: ");
    scanf("%i", &table);

    if (table == 0) {
        return 1;
    }

    for (int i = 1; i < 11; i ++) {
        printf("%i X %i = %i\n", table, i, i * table);
    }

    return 0;
}