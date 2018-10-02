#include <stdio.h>
#include <math.h>

void ikiReqeminMaxi() {
    int number, number1;
    int max;
    scanf("%d", &number);
    scanf("%d", &number1);
    max = number;
    if (number1 > max)
        max = number1;
    printf("Boyuk reqem %d\n", max);
}

void kokalti() {
    float value, squareroot;
    printf("Kok altina salmaq istediyiniz reqemi daxil edin\n");
    scanf("%f", &value);
    if (value >= 0.0) {
        squareroot = sqrt(value);
        printf("Daxil etdiyiniz reqem %.0f\n", value);
        printf("Daxil etdiyiniz reqemin koku %.0f\n", squareroot);
    } else {
        printf("Daxil etdiyiniz reqemde yanlisliq var");
    }
}

void maxWithWhile() {
    int number;
    int max = -100000;
    printf("Reqemleri Daxil edin \n");
    scanf("%d", &number);

    while (number != -1) {
        if (number > max)
            max = number;
        scanf("%d", &number);

    }
    printf("En Boyuk Reqem %d\n", max);
}

void threeMax() {

    int number1, number2, number3;
    int max;
    scanf("%d", &number1);
    scanf("%d", &number2);
    scanf("%d", &number3);
    max = number1;
    if (number2 > max)
        max = number2;
    if (number3 > max)
        max = number3;
    printf("The Largest number is %d\n", max);
}

void whileExample() {
    int Evens = 0, Odds = 0;
    int Number;
    scanf("%d", &Number);
    while (Number != 0) {
        if (Number % 2)
            Odds++;
        else
            Evens++;
        scanf("%d", &Number);
    }
    printf("Evens Numbers: %d\n", Evens);
    printf("Evens Numbers: %d\n", Odds);
}

void whileExample2() {
    int counter = 5;
    while (counter--) {
        printf("Salam qaqa %d\n", counter);
    }
}

void whiledo() {
    int number;
    int max = -100000;
    int counter;
    do {
        scanf("%d", &number);
        if (number != -1)
            counter++;
        if (number > max)
            max = number;
    } while (number != -1);
    if (counter) {
        printf("The largest number is %d\n", max);
    } else
        printf("You entered bad numbers");
}



int main(void) {
//    kokalti();
//  whileExample();
//    whileExample2();
  whiledo();
    return 0;
}
