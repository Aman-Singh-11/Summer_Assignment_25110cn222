//WAP TO CREATE MINI LIBRARY SYSTEM.
#include <stdio.h>

int main()
{                                          // USING MORE SPACES TO ENHANCE MY CODE .
    char bookName[5][50];
    char author[5][50];
    int i;

    printf("Enter details of 5 books:\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book Name: ");
        scanf(" %[^\n]", bookName[i]);

        printf("Enter Author Name: ");
        scanf(" %[^\n]", author[i]);
    }

    printf("\n------ Library Records ------\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book Name   : %s\n", bookName[i]);
        printf("Author Name : %s\n", author[i]);
    }

    return 0;
}