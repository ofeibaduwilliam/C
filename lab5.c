#include <stdio.h>
#include <stdlib.h>

float circle(float radius){
    return 3.14159 * radius * radius;
}

float square(float side){
    return side * side;
}

float rectangle(float length, float breadth){
    return length * breadth;
}

float triangle(float height, float base){
    return 0.5 * height * base;
}


int main(){
    float area;
    printf("Shape 1\nIt contains a semi-circle and a rectangle.\n");
    area = circle(4)/2 + rectangle(12,8);
    printf("Area of shape 1 = %.2fsquared feet\n\n ", area);

    printf("Shape 2\nIt contains a triangle and a rectangle.\n");
    area = triangle(6,8) + rectangle(13,8);
    printf("Area of shape 2 = %.2fsquared feet\n\n ", area);

    printf("Shape 3\nIt contains a square and a rectangle.\n");
    area = square(5) + rectangle(11,4);
    printf("Area of shape 3 = %.2fsquared feet\n\n ", area);

    printf("Shape 4\nIt contains a semi-circle and a tirangle.\n");
    area = circle(4)/2 + triangle(7,8);
    printf("Area of shape 4 = %.2fsquared feet\n\n ", area);

    printf("Shape 5\nIt contains a triangle and a square.\n");
    area = triangle(4,7) + square(7);
    printf("Area of shape 5 = %.2fsquared feet\n\n ", area);

    printf("Shape 6\nIt contains a semi-circle and a rectangle.\n");
    area = square(4) + rectangle(12,6);
    printf("Area of shape 6 = %.2fsquared feet\n\n ", area);
    return 0;
}