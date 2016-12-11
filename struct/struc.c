#include <stdio.h>
#include <string.h>

struct Book{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main(){
    struct Book b1;
    struct Book b2;

    strcpy(b1.title, "C programming");
    strcpy(b1.author, "Rigi");
    strcpy(b1.subject, "C programming Tutorial");
    b1.book_id = 1234;

    strcpy(b2.title, "Go programming");
    strcpy(b2.author, "Robte");
    strcpy(b2.subject, "Go language programming");
    b2.book_id = 5678;

    printf("b1.title: %s\n", b1.title);
    printf("b1.author: %s\n", b1.author);
    printf("b1.subject: %s\n", b1.subject);
    printf("b1.book_id: %d\n", b1.book_id);

    /*b2*/
    printf("b2.title: %s\n", b2.title);
    printf("b2.author: %s\n", b2.author);
    printf("b2.subject: %s\n", b2.subject);
    printf("b2.book_id: %d\n", b2.book_id);

    return 0;
}
