//3 input test score average calculator - Haramerik
//Based on a coding challege and feedback from ChatGPT
#include <stdio.h>

int main(void) {
    int testScores[3]; //int arrray testScores, length: 3
    int sum = 0; //int variable sum set equal to zero

    printf("Input 3 test scores:\n"); //prints message
    for (int index = 0; index < 3; index++) { //traverses array by incrementing variable index
        scanf("%d", &testScores[index]); //sets inputs to elements of the array
        sum += testScores[index]; //adds inputs up in sum variable
    }

    int average = sum / 3; //calculates average and stores it in int variable
    printf("Your average test score is: %d\n", average); //prints result
    return 0;
}