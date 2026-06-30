#include <stdio.h>

#define MAX 100

struct Book {
    int id;
    char title[50];
    char author[50];
    int available;      
};

int main() {
    struct Book b[MAX];
    int n = 0, choice, i, id, found;

    do {
        printf("\n========== MINI LIBRARY SYSTEM ==========\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Delete Book\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &b[n].id);

            printf("Enter Book Title: ");
            scanf("%s", b[n].title);

            printf("Enter Author Name: ");
            scanf("%s", b[n].author);

            b[n].available = 1;
            n++;

            printf("Book Added Successfully.\n");
            break;

        case 2:
            if(n == 0) {
                printf("Library is Empty.\n");
            } else {
                printf("\n------------------------------------------------------------\n");
                printf("ID\tTitle\t\tAuthor\t\tStatus\n");
                printf("------------------------------------------------------------\n");

                for(i = 0; i < n; i++) {
                    printf("%d\t%s\t\t%s\t\t%s\n",
                           b[i].id,
                           b[i].title,
                           b[i].author,
                           b[i].available ? "Available" : "Issued");
                }
            }
            break;

        case 3:
            printf("Enter Book ID to Search: ");
            scanf("%d", &id);

            found = 0;
            for(i = 0; i < n; i++) {
                if(b[i].id == id) {
                    printf("\nBook Found\n");
                    printf("ID     : %d\n", b[i].id);
                    printf("Title  : %s\n", b[i].title);
                    printf("Author : %s\n", b[i].author);
                    printf("Status : %s\n",
                           b[i].available ? "Available" : "Issued");
                    found = 1;
                    break;
                }
            }

            if(found == 0)
                printf("Book Not Found.\n");
            break;

        case 4:
            printf("Enter Book ID to Issue: ");
            scanf("%d", &id);

            found = 0;
            for(i = 0; i < n; i++) {
                if(b[i].id == id) {
                    if(b[i].available) {
                        b[i].available = 0;
                        printf("Book Issued Successfully.\n");
                    } else {
                        printf("Book is Already Issued.\n");
                    }
                    found = 1;
                    break;
                }
            }

            if(found == 0)
                printf("Book Not Found.\n");
            break;

        case 5:
            printf("Enter Book ID to Return: ");
            scanf("%d", &id);

            found = 0;
            for(i = 0; i < n; i++) {
                if(b[i].id == id) {
                    if(!b[i].available) {
                        b[i].available = 1;
                        printf("Book Returned Successfully.\n");
                    } else {
                        printf("Book is Already Available.\n");
                    }
                    found = 1;
                    break;
                }
            }

            if(found == 0)
                printf("Book Not Found.\n");
            break;

        case 6:
            printf("Enter Book ID to Delete: ");
            scanf("%d", &id);

            found = 0;
            for(i = 0; i < n; i++) {
                if(b[i].id == id) {
                    int j;
                    for(j = i; j < n - 1; j++) {
                        b[j] = b[j + 1];
                    }
                    n--;
                    printf("Book Deleted Successfully.\n");
                    found = 1;
                    break;
                }
            }

            if(found == 0)
                printf("Book Not Found.\n");
            break;

        case 7:
            printf("Thank You for Using Mini Library System!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while(choice != 7);

    return 0;
}