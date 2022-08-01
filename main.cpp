/*
 ============================================================================
 Name        : Cbank.c
 Author      : Brandon Tretsven
 Version     : 1.0
 Copyright   :
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 1

int main(void) {
    int i;

    puts("Welcome to the C mini bank");
    puts("choose an option");
    puts("1. deposit");
    puts("2. withdrawal");
    puts("3. show balance");
    puts("4. EXIT PROGRAM");
    scanf("%d", &i);
    //strtoi()

    switch(i) {

        case 1  :
            puts("You chose deposit");
            break; /* optional */

        case 2  :
            puts("You chose withdrawal");
            break; /* optional */

        case 3  :
            puts("You chose view balance");
            break; /* optional */

        case 4  :
            puts("PROGRAM EXITING");
            break; /* optional */

            /* you can have any number of case statements */
        default : /* Optional */
            puts("You must pick 1, 2, or 3");




    }



    return EXIT_SUCCESS;
}