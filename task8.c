#include <stdio.h>

struct Car {
    int carID;
    char model[50];
    float rentalRatePerDay;
};

int main() {
    struct Car cars[3];
    int rentalDays;

    for (int i = 0; i < 3; i++) {
        printf("Enter details for car %d\n", i + 1);
        printf("Car ID: ");
        scanf("%d", &cars[i].carID);
        printf("Model: ");
        scanf("%s", cars[i].model);
        printf("Rental Rate per Day: ");
        scanf("%f", &cars[i].rentalRatePerDay);
    }

    printf("Enter the number of rental days: ");
    scanf("%d", &rentalDays);

    for (int i = 0; i < 3; i++) {
        float totalCost = cars[i].rentalRatePerDay * rentalDays;
        printf("Car %d: Model: %s, Total Rental Cost for %d days: %.2f\n", cars[i].carID, cars[i].model, rentalDays, totalCost);
    }

    return 0;
}
