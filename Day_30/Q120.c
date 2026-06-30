// WAP TO DEVELOPE COMPLETE MINI PROJECT USING ARRAYS,STRINGS AND FUNCTIONS.
#include<stdio.h>
#include<string.h>

char book[10][50];
char author[10][50];
int id[10];
int n;

void addBooks(){
    int i;
    printf("Enter number of books: ");
    scanf("%d",&n);

for(i=0;i<n;i++){
printf("\nBook %d\n",i+1);
printf("Enter Book ID: ");
scanf("%d",&id[i]);
printf("Enter Book Name: ");
scanf(" %[^\n]",book[i]);
printf("Enter Author Name: ");
scanf(" %[^\n]",author[i]);
}
}

void displayBooks(){
int i;
printf("\nLibrary Records\n");
for(i=0;i<n;i++){
printf("\nBook ID : %d\n",id[i]);
printf("Book Name : %s\n",book[i]);
printf("Author : %s\n",author[i]);
}
}

void searchBook(){
int i,key,found=0;
printf("\nEnter Book ID to search: ");
scanf("%d",&key);
for(i=0;i<n;i++){
if(id[i]==key){
printf("\nBook Found\n");
printf("Book ID : %d\n",id[i]);
printf("Book Name : %s\n",book[i]);
printf("Author : %s\n",author[i]);
    found=1;
    break;
}
}

if(found==0)
printf("Book not found.\n");
}

int main(){
int choice;
do{
    printf("\n--- Mini Library System ---\n");
    printf("1. Add Books\n");
    printf("2. Display Books\n");
    printf("3. Search Book\n");
    printf("4. Exit\n");
    printf("Enter Choice: ");
    scanf("%d",&choice);

switch(choice){
case 1: addBooks(); break;
case 2: displayBooks(); break;
case 3: searchBook(); break;
case 4: printf("Thank You!\n"); break;
default: printf("Invalid Choice\n");
}
}while(choice!=4);
return 0;
}