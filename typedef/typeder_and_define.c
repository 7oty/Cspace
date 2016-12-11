#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0

typedef struct Book {
    char title[50];
    char author[50];
    char subject[100];
    int id;
}Book;

void printBook(Book *book);

int main() {
    Book book;
    strcpy(book.title, "C language programming");
    strcpy(book.author, "Lee");
    strcpy(book.subject, "C programming toturial");
    book.id = 2017;

    printf("+++++++++++++++++++++++++++++++++++++\n");

    printBook(&book);

    printf("*************************************\n");

    printf("value of TRUE: %d\n", TRUE);
    printf("value of FALSE: %d\n", FALSE);

    return 0;
}

void printBook(Book *book) {
    printf("book title: %s\n", book->title);
    printf("book author: %s\n", book->author);
    printf("book subject: %s\n", book->subject);
    printf("book id: %d\n", book->id);
}
