// C program to compute BMI and print BMI category
#include <stdio.h>

int main() {
    float weight, height, bmi;
    
    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);
    
    printf("Enter height in meters: ");
    scanf("%f", &height);
    
    // Calculate BMI
    bmi = weight / (height * height);
    
    printf("Your BMI is: %.2f\n", bmi);
    
    // Determine BMI category
    if (bmi < 18.5) {
        printf("Category: Underweight\n");
    } else if (bmi >= 18.5 && bmi < 25.0) {
        printf("Category: Normal weight\n");
    } else if (bmi >= 25.0 && bmi < 30.0) {
        printf("Category: Overweight\n");
    } else {
        printf("Category: Obese\n");
    }
    
    return 0;
}
