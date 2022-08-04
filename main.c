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
    float bank= 0;
    float input = 0;
    int transNum = 0;

    // Declare the file pointer
    FILE *filePointer;
    // Declare the variable for the data to be read from file
    char dataToBeRead[10];

    // Open the existing file balances.txt using fopen()
    // in read mode using "r" attribute
    filePointer = fopen("balances.txt", "r") ;

    // Check if this filePointer is null
    // which maybe if the file does not exist
    if ( filePointer == NULL )
    {
        printf( "balances.txt file failed to open.\n" ) ;
    }
    else
    {

        printf("The file is now opened.\n") ;

        // Read the dataToBeRead from the file
        // using fgets() method
        while( fgets ( dataToBeRead, 50, filePointer ) != NULL )
        {

            // Print the dataToBeRead
            printf( "%s" , dataToBeRead ) ;
        }

        // Closing the file using fclose()
        fclose(filePointer) ;

        printf("Data successfully read from file balances.txt\n");
        printf("The file is now closed.") ;
    }





    puts("Welcome to the C mini bank");

    while(i != 4){

        puts("choose an option");
        puts("1. deposit");
        puts("2. withdrawal");
        puts("3. show balance");
        puts("4. EXIT PROGRAM");
        scanf("%d", &i);

        switch (i) {

            case 1  :
                puts("How much would you like to deposit\n");
                scanf("%f", &input);
                bank += input;
                transNum++;
                printf("%f\n\n", bank);
                break; /* optional */

            case 2  :
                puts("How much would you like to withdraw\n");
                scanf("%f", &input);
                bank -= input;
                transNum++;
                printf("%f\n\n", bank);
                break; /* optional */

            case 3  :
                puts("You chose view balance\n\n");
                printf("***Balance is: %f ***\n\n", bank);
                break; /* optional */

            case 4  :
                puts("PROGRAM EXITING");
                // Declare the file pointer
                FILE *filePointer ;

                // Get the data to be written in file
                char * banker;
                banker[10] = (char) bank;
                char dataToBeWritten[50]
                        = "0";

                // Open the existing file balances.txt using fopen()
                // in write mode using "w" attribute
                filePointer = fopen("balances.txt", "w") ;

                // Check if this filePointer is null
                // which maybe if the file does not exist
                if ( filePointer == NULL )
                {
                    printf( "balances.txt file failed to open." ) ;
                }
                else
                {

                    printf("The file is now opened.\n") ;

                    // Write the dataToBeWritten into the file
                    if ( strlen ( dataToBeWritten ) > 0 )
                    {

                        // writing in the file using fputs()
                        fputs(dataToBeWritten, filePointer) ;
                        fputs("\n", filePointer) ;
                    }

                    // Closing the file using fclose()
                    fclose(filePointer) ;

                    printf("Data successfully written in file balances.txt\n");
                    printf("The file is now closed.") ;
                }






                puts("saved");
                break; /* optional */

                /* you can have any number of case statements */
            default : /* Optional */
                puts("You must pick 1, 2, or 3\n5");
        }

    }

    return EXIT_SUCCESS;
}