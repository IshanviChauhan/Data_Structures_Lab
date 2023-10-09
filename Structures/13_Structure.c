//Let us work on the menu of a library. 
//Create a structure containing book information like accession number, name of author, book title and flag to know whether book is issued or not. 
//Create a menu in which the following can be done:
//1 - Display book information
//2 - Add a new book
//3 - Display all the books in the library of a particular author
//4 - Display the number of books of a particular title
//5 - Display the total number of books in the library
//6 - Issue a book
//(If we issue a book, then its number gets decreased by 1 and if we add a book, its number gets increased by 1)
#include<stdio.h>
#include<string.h>
int bookCount=0;

struct book
{
    int acc;
    char name[30];
    char title[100];
    int flag; //Book issued -> Flag=1; Book not issued -> Flag=0
}library[100];

void display()
{
    for(int i=0; i<bookCount; i++)
    {
        printf("\nDetails of Book %d\n",i+1);
        printf("Accession Number: %d\nBook Title: %s\nAuthor Name: %s\n",library[i].acc,library[i].title,library[i].name);
    }
}
void add()
{
    printf("Enter Accession Number: ");
    scanf("%d",&library[bookCount].acc);

    printf("Enter Book Title: ");
    fflush(stdin);
    gets(library[bookCount].title);

    printf("Enter Author Name: ");
    fflush(stdin);
    gets(library[bookCount].name);

    bookCount++;

    printf("Total number of books: %d\n",bookCount);
}
void author()
{
    char authorName[30];
    printf("Enter Author's name: ");
    fflush(stdin);
    gets(authorName);

    printf("\nBooks by %s:\n",authorName);
    for(int i=0; i<bookCount; i++)
    {
        if(strcmp(library[i].name,authorName) == 0)
        {
            printf("%s\n",library[i].title);
        }
    }
}
void title()
{
    char bookTitle[30];
    int titleCount = 0;
    printf("Enter Book's title: ");
    fflush(stdin);
    gets(bookTitle);

    for(int i=0; i<bookCount; i++)
    {
        if(strcmp(library[i].title,bookTitle) == 0)
        {
            titleCount++;
        }
    }
    printf("\nTotal number of books of title '%s' are : %d\n",bookTitle,titleCount);
}
void total()
{
    printf("\nTotal number of books = %d\n",bookCount);
}
void issue()
{
    int accNo;
    printf("Enter Accession Number of the book to be issued: ");
    scanf("%d",&accNo);
    for (int i = 0 ; i < bookCount ; i++)
    {
        if (library[i].acc==accNo)
        {
            if(library[i].flag==0)
            {
                library[i].flag=1;
                printf("Book with Accession Number %d has been issued.\n",accNo);
            }
            else
            {
                printf("Book with Accession Number %d is already issued.\n",accNo);
            }
            return;
        }
    }
    printf("Book with Accession Number %d not found in the library.\n", accNo);
}

void main()
{
    int choice=1;

    printf("Enter books information: ");

    while(choice>0 && choice<7)
    {
        printf("\n1 - Display books information\n2 - Add a new book\n3 - Display all the books in the library of a particular author\n4 - Display the number of books of a particular title\n5 - Display the total number of books in the library\n6 - Issue a book\n7 - Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch (choice){
            case 1:
            {
                if(bookCount==0)
                {
                    printf("No book available in library");
                }
                else
                {
                    display();
                }
                break;
            }
            case 2:
            {
                add();
                break;
            }
            case 3:
            {
                if(bookCount==0)
                {
                    printf("No book available in library");
                }
                else
                {
                   author();
                }
                break;
            }
            case 4:
            {
                if(bookCount==0)
                {
                    printf("No book available in library");
                }
                else
                {
                    title();
                }
                break;
            }
            case 5:
            {
                total();
                break;
            }
            case 6:
            {
                if(bookCount==0)
                {
                    printf("No book available in library");
                }
                else
                {
                    issue();
                }
                break;
            }
            default :
            {
                printf("Exit!");
            }
        }
    }
}