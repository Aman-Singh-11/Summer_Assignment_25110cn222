// WAP TO CREATE LIBRARY MANAGEMENT SYSTEM.
#include <stdio.h>
struct Book {
int bookId;
char title[50];
char author[50];
float price;
};
int main() {
struct Book book;
printf("===== LIBRARY MANAGEMENT SYSTEM =====\n");
printf("Enter Book ID: ");
scanf("%d", &book.bookId);
printf("Enter Book Title: ");
scanf(" %[^\n]", book.title);
printf("Enter Author Name: ");
scanf(" %[^\n]", book.author);
printf("Enter Book Price: ");
scanf("%f", &book.price);
printf("\n===== BOOK DETAILS =====\n");
printf("Book ID     : %d\n", book.bookId);
printf("Book Title  : %s\n", book.title);
printf("Author Name : %s\n", book.author);
printf("Book Price  : %.2f\n", book.price);
return 0;
}