#include <stdio.h>

float average(int a, int b, int c) {

    return (a + b + c) / 3.0;

}

int main() {

    char name[20] = "Tide";

    int math = 9, physics = 7, chemistry = 0;

    float avg;

    printf("Enter Math score: %d\n", math);

    printf("Enter Physics score: %d\n", physics);

    printf("Enter Chemistry score: %d\n", chemistry);

    avg = average(math, physics, chemistry);

    printf("\nName = %s\n", name);

    printf("Math = %d\n", math);

    printf("Physics = %d\n", physics);

    printf("Chemistry = %d\n", chemistry);

    printf("Average = %.2f\n", avg);

    return 0;

}