#include <stdio.h>
int main() {
    int a, b;
    printf("Enter length: ");
    scanf("%d", &a);
    printf("Enter width: ");
    scanf("%d", &b);
    int area = a * b;
    printf("The area of rectangle is %d", area);
    int perimeter = 2 * (a + b);
    printf("\nThe perimeter is %d", perimeter);
    return 0;
}
