// C program to check validity of triangle and classify it
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    
    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    
    // Check validity of triangle
    if (a + b > c && b + c > a && a + c > b) {
        printf("Triangle is valid.\n");
        
        // Check type of triangle
        if (a == b && b == c) {
            printf("Triangle is Equilateral.\n");
        } else if (a == b || b == c || a == c) {
            printf("Triangle is Isosceles.\n");
        } else {
            printf("Triangle is Scalene.\n");
        }
        
        // Check if right-angled triangle
        float a2 = a * a;
        float b2 = b * b;
        float c2 = c * c;
        
        if (fabs(a2 + b2 - c2) < 0.0001 || fabs(b2 + c2 - a2) < 0.0001 || fabs(a2 + c2 - b2) < 0.0001) {
            printf("Triangle is Right-Angled.\n");
        }
    } else {
        printf("Triangle is not valid.\n");
    }
    
    return 0;
}
