#include <stdio.h>
#include <ctype.h>

/*
  * author: P Sanjay
  * date: 24/06/2025
  * subject: C Programming
*/

int question1();
int question2();
int question3();
int question4();
int question5();

int main() {
    question1();
    question2();
    question3();
    question4();
    question5();
    return 0;
}

int question1() {
    /*
        Write a c program to print student details
    */

    printf("Name: P Sangeetha\n");
    printf("Age: 19\n");
    printf("Course: Computer Science Engineering\n");
    printf("CGPA: 8.4\n");
    printf("Current Semester: 2\n");
    return 0;
}

int question2() {
    /*
        Write a C program to input 2 integer numbers, 2 fractional numbers and print it
    */

    int a, b;
    float x, y;

    printf("Enter the first integer \t");
    scanf("%i\n", &a);
    printf("Enter the second integer \t");
    scanf("%i\n", &b);
    printf("Enter the first fractional number\t");
    scanf("%f\n", &x);
    printf("Enter the second fractional number \t");
    scanf("%f\n", &y);

    printf("First Integer: %i\nSecond Integer: %i\nFirst Fractional Number: %f\nSecond Fractional Number: %f", a, b, x, y);
    return 0;
}

int question3() {
    /*
        Write a C program to print a triangle (Pascal's triangle)
    */

    /*
        Formula for pascal's triangle 
        
        C(n, r) = { C(n, r - 1) * (n - r + 1) } / r
    */

    int lines;

    printf("Enter the number of lines in the pascal's triangle: ");
    scanf("%i", &lines);

    for (int i = 0; i < lines; i ++) {
        for (int j = 0; j < lines - i - 1; j ++) {
            printf(" ");
        }

        // for (int k = 0; )
    }

}

int question4() {
    /*
        Write a C program to print the grades of a student using switch case (Any grade rule)
    */

    char grade;
    printf("Enter the grade of the student:  ");
    scanf("%c\n", &grade);
    switch (tolower(grade)) {
        case 'o':
            printf("Outstanding");
            break;
        case 'a':
            printf("Excellent");
            break;
        case 'b':
            printf("Good");
            break;
        case 'c':
            printf("Fine");
            break;
        case 'd':
            printf("Alright");
            break;
        case 'p':
            printf("Just Pass");
            break;
        case 'f':
            printf("Fail");
            break;
        default:
            printf("Invalid char, Try again");
            return -1;
    }
    
    return 0;
}

int question5() {
    /*
        Write a C program to print the days of a week using if else if condition
    */

    int date = 30;

    if (date > 31 || date < 0) {
        printf("Invalid date");
        return 1;
    }

    if (date / 7 == 0) {
        printf("Today is Sunday");
    } else if (date / 7 == 1) {
        printf("Today is Monday");
    } else if (date / 7 == 2) {
        printf("Today is Tuesday");
    } else if (date / 7 == 3) {
        printf("Today is Wednesday");
    } else if (date / 7 == 4) {
        printf("Today is Thursday");
    } else if (date / 7 == 5) {
        printf("Today is Friday");
    } else {
        printf("Today is Saturday");
    }

    // switch (date / 7) {
    //     case 0:
    //         break;
    //     case 1:
    //         break;
    //     case 2:
    //         break;
    //     case 3:
    //         break;
    //     case 4:
    //         break;
    //     case 5:
    //         break;
    //     default:
    // }
    
    return 0;
}