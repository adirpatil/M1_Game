#include<stdio.h>
#include "defination.h"//defined structure

int main()
{
    //variables declared
    bookN b[20];
    int n;
    static int i=0;
    char name[20];
    //user input
    printf("\n");
    printf("\tHello to Book Management system \n");
    printf("\n");
    start://label
    printf("1.Add Book \t 2.Search Book \t 3.Book Issue\t 4.Book Available \t 5.Delete Book\t 6.Display\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        content(b,i);
        display(b,i);
        i++;
        goto start;
    case 2:
        printf("Enter the Book Name to be found\n");
        scanf("%s",name);
        find_book(b,i,name);
        goto start;
    case 3:
        printf("Enter the Book Name to be Issued\n");
        scanf("%s",name);
        issue_to(b,i,name);
        goto start;
    case 4:
        available_book(b,i);
        goto start;
    case 5:
        delete_book(b,i);
        goto start;
    case 6:
        display_Book(b,i);
        goto start;
    default:
        printf("Enter a valid input\t\n");
        goto start;
    }
}
