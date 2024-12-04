// Create a nested structure for a library management system. Use a structure Book (fields:
// title, author, publicationYear) inside a structure Library. Input details of 5
// books and display the titles of all books published after the year 2000. The structure
// variable must be created using DMA.


#include <stdio.h>
#include <stdlib.h>

// Define a structure for Book
struct Book {
    char title[100];
    char author[50];
    int publicationYear;
};

// Define a structure for Library
struct Library {
    struct Book *books;  // since we have to use Book structure inside of library structure , we define a pointer to an array of book structure
    int numBooks;        // Number of books in the library
};

int main() {
    // Create a Library structure variable using DMA
    struct Library *library = (struct Library *)malloc(sizeof(struct Library));
    
    if (library == NULL) {
        printf("Memory allocation failed.\n");
        return 1;  // Exit if memory allocation fails
    }

    // Set the number of books
    library->numBooks = 5;

    // Dynamically allocating memory for an array of 5 book structues. Each book structure takes up the size of struct book 
    library->books = (struct Book *)malloc(library->numBooks * sizeof(struct Book));

  
    if (library->books == NULL) {
        printf("Memory allocation for books failed.\n");
        free(library);  // Free previously allocated memory
        return 1;  // Exit if memory allocation fails
    }

    // Input details of 5 books
    for (int i = 0; i < library->numBooks; i++) {
        printf("\nEnter details for Book %d:\n", i + 1);
        
        // Input book title
        printf("Title: ");
        scanf("%s", library->books[i].title); // Use scanf for input
        
        // Input author
        printf("Author: ");
        scanf("%s", library->books[i].author); // Use scanf for input

        // Input publication year
        printf("Publication Year: ");
        scanf("%d", &library->books[i].publicationYear);
    }

    // Display titles of books published after the year 2000
    printf("\nBooks published after the year 2000:\n");
    for (int i = 0; i < library->numBooks; i++) {
        if (library->books[i].publicationYear > 2000) {
            printf("Title: %s\n", library->books[i].title);
        }
    }

    // Free allocated memory
    free(library->books);
    free(library);

    return 0;
}
