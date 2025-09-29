#include <stdio.h>
void inputAndShow() {

    char name[20] = "Tide";

    int math = 7, physics = 15, chemistry = 2;

    printf("Enter Math: %d\n", math);

    printf("Enter Physics: %d\n", physics);

    printf("Enter Chemistry: %d\n", chemistry);


    printf("Name: %s\n", name);

    printf("Scores: Math = %d, Physics = %d, Chemistry = %d\n",

           math, physics, chemistry);

}

int main() {

    inputAndShow();

    return 0;

}

