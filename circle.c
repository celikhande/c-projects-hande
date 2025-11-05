#include <stdio.h>
int main(void) {

    const float PI = 3.14159;
    float radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);
    printf("The circumference of the circle with radius %.2f is %.2f\n", radius, circumference);
    return 0;
}
