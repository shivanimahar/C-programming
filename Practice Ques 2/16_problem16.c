/*
CQ18. Write a C program using a do-while loop to display a menu and
      repeat until the user selects "Exit" (option 4).

      Menu:
      1. Add
      2. Subtract
      3. Multiply
      4. Exit
      Enter choice: _
*/
#include <stdio.h>

int main() {
    int choice, a, b;

    do {
        // Menu print karo
        printf("\nMenu:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d", a + b);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d", a - b);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d", a * b);
                break;

            case 4:
                printf("Exiting... Bye!");
                break;

            default:
                printf("Invalid choice!");
        }

    } while(choice != 4);  // 4 aaya toh band

    return 0;
}
