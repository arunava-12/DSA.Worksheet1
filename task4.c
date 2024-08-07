#include <stdio.h>

struct Book {
    char title[100];
    char author[50];
    float price;
};

int main() {
    struct Book books[3];
    int maxPriceIndex = 0, minPriceIndex = 0;

    for (int i = 0; i < 3; i++) {
        printf("Enter details for book %d\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]%*c", books[i].title);  
        printf("Author: ");
        scanf(" %[^\n]%*c", books[i].author); 
        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    for (int i = 1; i < 3; i++) {
        if (books[i].price > books[maxPriceIndex].price) {
            maxPriceIndex = i;
        }
        if (books[i].price < books[minPriceIndex].price) {
            minPriceIndex = i;
        }
    }

    printf("\nMost Expensive Book:\n");
    printf("Title: %s, Author: %s, Price: %.2f\n", books[maxPriceIndex].title, books[maxPriceIndex].author, books[maxPriceIndex].price);

    printf("\nLowest Priced Book:\n");
    printf("Title: %s, Author: %s, Price: %.2f\n", books[minPriceIndex].title, books[minPriceIndex].author, books[minPriceIndex].price);

    return 0;
}
