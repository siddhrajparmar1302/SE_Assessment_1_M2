// Write a program to demonstrate a Food Billing System. 

#include <stdio.h>
main() 
{
    int choice, quantity, amount;  
    char more;
    int totalAmount = 0;

    do {
        // Display the menu
        printf("--------- Menu ---------\n");
        printf("1. Pizza       price = 180rs/pcs\n");
        printf("2. Burger      price = 100rs/pcs\n");
        printf("3. Dosa        price = 120rs/pcs\n");
        printf("4. Idli        price = 50rs/pcs\n");
        printf("Please Enter your choice...: ");
        scanf("%d", &choice);
        
        amount = 0;

        switch (choice) {
            case 1:
                printf("You have selected Pizza.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                amount = 180 * quantity;
                break;
            case 2:
                printf("You have selected Burger.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                amount = 100 * quantity;
                break;
            case 3:
                printf("You have selected Dosa.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                amount = 120 * quantity;
                break;
            case 4:
                printf("You have selected Idli.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                amount = 50 * quantity;
                break;
            default:
                printf("Invalid choice!\n");
                continue;
        }
    
        totalAmount += amount; // Add the current item amount to the total amount

        printf("Amount: %d\n", amount);
        printf("Total Amount is = %d\n", totalAmount);

        printf("Do you want to place more orders? y & n : ");  // Ask the user if they want to place more orders
        scanf(" %c", &more); 

    } while(more == 'y' || more == 'Y');

    
    printf("Final Total Amount is = %d\n", totalAmount); // Display the final bill
}

