#include <stdio.h>
#define PI 3.14159

struct Circle {
    float radius;
};

float calculateArea(struct Circle c) {
    return PI * c.radius * c.radius;
}

float calculatePerimeter(struct Circle c) {
    return 2 * PI * c.radius;
}

int main() {
    struct Circle circles[2];

    for (int i = 0; i < 2; i++) {
        printf("Enter radius for circle %d: ", i + 1);
        scanf("%f", &circles[i].radius);
    }

    for (int i = 0; i < 2; i++) {
        printf("Circle %d: Radius: %.2f, Area: %.2f, Perimeter: %.2f\n", i + 1, circles[i].radius, calculateArea(circles[i]), calculatePerimeter(circles[i]));
    }

    return 0;
}
