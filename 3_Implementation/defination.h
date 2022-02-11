#include<string.h>

typedef struct{
    int book_id;
    char book_name[50];
    int book_page;
    char book_author[50];
    char issued_to[50];
}bookN;

void content(bookN *b,int i)
{
    char a[10],bm ='y';
    printf("Enter Book Id\n");
    scanf("%d",&b[i].book_id);
    printf("Enter Book Name\n");
    scanf("%s",b[i].book_name);
    printf("Enter the No of pages\n");
    scanf("%d",&b[i].book_page);
    printf("Enter the Book's author\n");
    scanf("%s",b[i].book_author);
    printf("Want to be issued enter y/n\n");
    scanf("%s",b[i].issued_to);
    if(b[i].issued_to[0]==bm)
    {
        printf("Enter the Name of the customer\n");
        scanf("%s",a);
        strcpy(b[i].issued_to,a);
    }
}


void display(bookN *b,int i)
{
        printf("the values enter are %d %s\t %d\t %s\t\n",b[i].book_id,b[i].book_name,b[i].book_page,b[i].book_author);
}

void display_Book(bookN *b,int i)
{
    for(int n=0;n<=i;n++)
    {
        if(b[n].book_id!=0)
        {
            printf("Book Id %d\n",b[n].book_id);
            printf("Book Name %s\n",b[n].book_name);
            printf("The No of pages %d\n",b[n].book_page);
            printf("The Book's author %s\n",b[n].book_author);
        }
    }
}

void delete_book(bookN *b,int i)
{
    int d;
    printf("Enter the book Id to delete the book\t\t");
    scanf("%d",&d);
    for(int n=0;n<=i;n++)
    {
        if(b[n].book_id==d)
        {
            b[n].book_id=0;
            break;
        }
    }
    printf("Book Deleted Successfully\n");
}

void find_book(bookN *b,int i,char a[])
{
    int n=0,cb=0;
    for(int j=0;j<=i;j++)
    {
        int flag=0,i=0;
        while(a[i]!='\0' &&b[j].book_name[i]!='\0')
        {
           if(a[i]!=b[j].book_name[i])
           {
               flag=1;
               break;
           }
           i++;
        }
        cb==j;
        if(flag==0)
            break;
        else
            n=1;
            continue;
    }
    if(n==0)
    {
        if(b[cb].book_id!=0)
        {
            printf("Book Found\n");
        }
        else
            printf("Book Has been Deleted\n");
    }
    else
        printf("Book Not Found\n");

}

//display modify
void issue_to(bookN *b,int i,char c[])
{
        int n=0,count_book=0;
        char a[10];
        char bm = 'n';
    for(int j=0;j<=i;j++)
    {
        int flag=0,i=0;
        while(c[i]!='\0' &&b[j].book_name[i]!='\0')
        {
           if(c[i]!=b[j].book_name[i])
           {
               flag=1;
               break;
           }
           i++;
        }
        count_book=j;
        if(flag==0)
            break;
        else
            n=1;
            continue;
    }
    if(n==0)
        if(b[count_book].book_id!=0)
        {
            if(b[count_book].issued_to[0]==bm)
            {
                printf("Enter the Name of the customer\n");
                scanf("%s",a);
                strcpy(b[count_book].issued_to,a);
                printf("the values enter are %d %s\t %d\t %s %s\t\n",b[count_book].book_id,b[count_book].book_name,b[count_book].book_page,b[count_book].book_author,b[count_book].issued_to);
            }
        }
        else
        {
            printf("Book Not Available Issued To %s\t\n",b[count_book].issued_to);
        }
    else
        printf("Book Not Found\n");
}

//display modify
void available_book(bookN *b,int i)
{
    char bm = 'n';
    for(int n=0;n<=i;n++)
    {
        if(b[n].book_id!=0)
        {
            if(b[n].issued_to[0]==bm)
            {
                printf("the values are %d\t %s\t %d\t %s\t\n",b[n].book_id,b[n].book_name,b[n].book_page,b[n].book_author);
            }
        }
    }
}
