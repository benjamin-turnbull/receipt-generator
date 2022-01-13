/* takes price and returns total with 10% GST tax added */

#include <stdio.h>

int main(void)
{
    int number, price, month, day, year;

    printf("Enter item number: ");
    scanf("%d", &number);
    printf("Enter unit price: ");
    scanf("%d", &price);
    printf("Enter purchase date: ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\t\tUnit Price\t\tPurchase Date\n%-4d\t\t\t%-4d\t\t\t%-d/%-d/%-d", number, price, month, day, year);
}
