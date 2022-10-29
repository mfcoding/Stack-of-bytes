#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

int main()
{
    stack st = new stack(null); 

    int operation = 1;
    char item;
    
    while (operation > 0 && operation < 7)
    {
        printf("%s", "\n\033[0;33m");
        puts("Select one of these operations below\n"
        " 1  to push a value on the stack\n"
        " 2  to pop a value off the stack\n"
        " 3  to print the number of the elements in the stack.\n"
        " 4  to show content of the stack.\n"
        " 5  to shrink capacity of the stack to fit its content.\n"
        " 6  to remove the entire stack from memory.\n"
        " 0  to exit the program.\033[0m\n"); 

        printf("Enter operation code: ");
        scanf("%i", &operation);

        switch (operation)
        {
            case 1:
                printf("%s", "Enter a character to push into stack: ");
                scanf(" %c", &item);
                push(&st, item);
                break;
            case 2:
                if(!empty(&st))
                {
                    printf("\nThe popped character is %c\n", *back(&st));
                    pop(&st);
                }
                else
                {
                    puts("Stack is empty.");
                }
                break;
            case 3:
                printf("The stack is holding %li characters.\n", count(&st));
                break;
            case 4:
                if(!empty(&st))
                {
                    printf("Content of stack: ");
                    show(&st);
                    putchar('\n');
                }
                else
                {
                    puts("Stack is empty.");
                }
                break;
            case 5:
                fit(&st);
                puts("Stack fitted its content successfully.");
                break;
            case 6:
                destroy(&st);
                puts("Stack removed successfully.");
                break;
            case 0:
                return 0;
            default:
                printf("Not valid op code.");
                break;
        }
    }
    
    return 0;
}
