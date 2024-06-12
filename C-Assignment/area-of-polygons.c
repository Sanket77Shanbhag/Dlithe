#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

float rectangleArea(float length, float width) {
    return length * width;
}
float squareArea(float side) {
    return side * side;
}
float circleArea(float radius) {
    return M_PI * radius * radius;
}
float triangleArea(float base, float height) {
    return 0.5 * base * height;
}
int main() {
    float length, width, area;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    area = rectangleArea(length, width);
    printf("The area of the rectangle is: %.2f\n", area);

    float side, area1;
    printf("Enter the side of the square: ");
    scanf("%f", &side);
    area1 = squareArea(side);
    printf("The area of the square is: %.2f\n", area1);

    float radius, area2;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area2 = circleArea(radius);
    printf("The area of the circle is: %.2f\n", area2);

    float base, height, area3;
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    area3 = triangleArea(base, height);
    printf("The area of the triangle is: %.2f\n", area3);
    return 0;
}

