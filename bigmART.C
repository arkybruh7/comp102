#include <stdio.h>
#include <ctype.h>

int total_bill = 0;

void counter(int price, int quantity)
{
    total_bill += price * quantity;
}

void display(int i, char name[][30], int price[], int quantity[])
{
    printf("\nProduct Name\t\tPrice\tQuantity\tPrice\n");

    for(int j = 0; j < i; j++)
    {
        printf("%-16s\t%d\t%d\t%d\n", name[j], price[j], quantity[j],price[j]*quantity[j]);
    }

    printf("\nYour total bill is %d\n", total_bill);
}

int main()
{
    int i = 0, price[10], quantity[10];
    char product_name[20][30], choice;

    do
    {
        printf("Enter Name of the product: ");
        scanf("%29s", product_name[i]);

        printf("Enter Price of the product: ");
        scanf("%d", &price[i]);

        printf("Enter Quantity of the product: ");
        scanf("%d", &quantity[i]);

        counter(price[i], quantity[i]);

        printf("Do you want to continue (Y/N)? ");
        scanf(" %c", &choice);
        choice = toupper(choice);

        i++;
    }
    while(choice == 'Y');

    display(i, product_name, price, quantity);
    return 0;
}
