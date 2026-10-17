#include <stdio.h>

int main()
{
    int id, quantity;
    float price, discount, subtotal, discountAmount, finalAmount;

    printf("Enter Product ID: ");
    scanf("%d", &id);

    printf("Enter Product Price: ");
    scanf("%f", &price);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Discount Percentage: ");
    scanf("%f", &discount);

    subtotal = price * quantity;
    discountAmount = subtotal * discount / 100;
    finalAmount = subtotal - discountAmount;

    printf("\n----- INVOICE -----\n");
    printf("Product ID = %d\n", id);
    printf("Subtotal = %.2f\n", subtotal);
    printf("Discount Amount = %.2f\n", discountAmount);
    printf("Final Payable Amount = %.2f\n", finalAmount);

    return 0;
}