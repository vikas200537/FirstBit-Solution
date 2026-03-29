#include <stdio.h>

int main() {
    float price, discount = 0, discountAmount, finalAmount;
    char student;

    // Accept price
    printf("Enter the purchase amount: ");
    scanf("%f", &price);

    // Ask if user is a student
    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);   // space before %c to clear buffer

    if (student == 'y' || student == 'Y') {
        if (price > 500) {
            discount = 0.20;
        } else {
            discount = 0.10;
        }
    } else {
        if (price > 600) {
            discount = 0.15;
        } else {
            discount = 0;
        }
    }

    discountAmount = price * discount;
    finalAmount = price - discountAmount;

    printf("Discount applied: %.0f%%\n", discount * 100);
    printf("Discount amount: %.2f\n", discountAmount);
    printf("Final amount to pay: %.2f\n", finalAmount);

    return 0;
}
