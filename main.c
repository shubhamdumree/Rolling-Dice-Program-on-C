#include <stdio.h>         // holding the input and output functions
#include <stdlib.h>        // holding the standard library
#include <time.h>          // holding time and date function declarations
#include <zconf.h>        // configuring the zlib compression language


int main() {

    // declaring variables
    int face;
    int throws;
    int count = 0;
    int diceRoll;
    int occurrence[25];

    srand(time(0));       //setting the seed to the random number algorithm

    printf("\nWelcome to dice rolling generator by Shubham & Kenneth.\n\n");

    usleep(1000000);   // function used to delay execution of the program until realtime microseconds has elapsed

    // inserting the number of faces
    printf("\nPlease enter number of faces (range between 1 and 25) : ");
    scanf("%d", &face);

    // while loop for invalid user input for number of faces
    while ((face < 2 || face > 24)) {
        printf("Invalid number, please enter a number from 2 to 24 : ");
        scanf("%d", &face);
    }


    // inserting the number of throws
    printf("\nNow, please enter number of throws (range between 1 and 500) : ");
    scanf("%d", &throws);

    // while loop for invalid user input for number of throws
    while ((throws < 2 || throws > 499)) {
        printf("Invalid number, please enter a number from to 2 to 499 : ");
        scanf("%d", &throws);
    }

    // displaying a message that has the user's choice
    printf("\n\nYou chose %d for number of faces and %d for number of throws.\n\n\n", face, throws);


    // creating a 2.5 second buffer before start of computations

    printf("Generating throws.. ");
    printf("\r");    // an escape sequence used to move the cursor to the beginning of the line
    fflush(stdout);
    usleep(300000);  // function used to delay execution of the program until realtime microseconds has elapsed

    printf("Generating throws... ");
    printf("\r");
    fflush(stdout);
    usleep(300000);

    printf("Wait Please.........  ");
    printf("\r");
    fflush(stdout);
    usleep(300000);

    printf("Generating throws.. ");
    printf("\r");
    fflush(stdout);
    usleep(300000);

    printf("Generating throws....");
    printf("\r");
    fflush(stdout);
    usleep(300000);

    printf("Wait Please.......  ");
    printf("\r");
    fflush(stdout);
    usleep(300000);

    printf("Wait Please...  ");
    printf("\r");
    fflush(stdout);
    usleep(300000);

    printf("Generating throws :");
    printf("\r");
    fflush(stdout);
    usleep(300000);


    // creating a loop with a formula to count the number of times the face appears
    for (int s = 1; s <= face; s++) {

        occurrence[s] = 0;

    }

    // initiating the occurrence formula and storing the occurrence number of each throw
    for (int a = 1; a <= throws; a++) {

        diceRoll = (rand() % face) + 1;  // generate a random number based on the user's input number of faces
        printf("\n\n%d\n", diceRoll);
        occurrence[diceRoll]++;    // each time a number is generated, it counts the number of times it was generated for each throw
        count++;

    }

    printf("\nFace   Occurrence   Occurrence(%%)");

    // calculating the percentage occurrence
    for (int x = 1; x <= face; x++) {

        // printing the occurrence percentage to 2 d.p
        float percentage_occ = ((float) occurrence[x]) / ((float)throws) * 100;
        printf("\n\n%d        %d          %.2f%%\n", x, occurrence[x], percentage_occ);

    }


    // appreciation message at the end of the program
    printf("\n\nThank you for using our dice rolling generator.\n");
    printf("Hope you had a great time using it!\n\n");

    return 0;

}


