#include <stdio.h>

void printTable(float arr[3][3], char names[3][20]) {

    printf("\nScore Table\n");

    printf("Student   Name     Math   Physics   Chemistry\n");

    for(int i = 0; i < 3; i++) {

        printf("%d   %-8s", i+1, names[i]);

        for(int j = 0; j < 3; j++) {

            printf("%8.2f", arr[i][j]);

        }

        printf("\n");

    }

}

void printAverage(float arr[3][3]) {

    float sumM = 0, sumP = 0, sumC = 0;

    for(int i = 0; i < 3; i++) {

        sumM += arr[i][0];

        sumP += arr[i][1];

        sumC += arr[i][2];

    }

    printf("\nAverage\n");

    printf("Math = %.2f\n", sumM/3);

    printf("Physics = %.2f\n", sumP/3);

    printf("Chemistry = %.2f\n", sumC/3);

}

int main() {

    char names[3][20] = {"Tide", "Best", "TonNam"};

    float scores[3][3] = {

        {2, 10, 10},   // Student 1

        {0, 12, 3},   // Student 2

        {7, 8, 4}     // Student 3

    };

    printTable(scores, names);

    printAverage(scores);

    return 0;

}