#include <stdio.h>
#include <stdlib.h>

int main() {
    int *expense;
    int n, total = 0;

    printf("Enter the number of months: ");
    scanf("%d", &n);

    expense = (int *)malloc(n * sizeof(int));
    if (expense == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter the expenses for %d months:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &expense[i]);
        total += expense[i];
    }

    printf("Expenses entered are:\n");
    for (int i = 0; i < n; i++)
        printf("Month %d: %d\n", i + 1, expense[i]);

    printf("Total expense for %d months = %d\n", n, total);

    int n1;
    printf("Enter the new total number of months: ");
    scanf("%d", &n1);

    int *new_expense = (int *)realloc(expense, n1 * sizeof(int));  
    if (new_expense == NULL) {                               
        printf("Memory reallocation failed!\n");
        free(expense);
        return 1;
    }
    expense = NULL; // ✅ avoid dangling pointer

    printf("Enter the expenses for the additional %d months:\n", n1 - n); 
    for (int i = n; i < n1; i++) {   
        scanf("%d", &new_expense[i]);
        total += new_expense[i];      
    }

    printf("Updated list of expenses:\n");
    for (int i = 0; i < n1; i++)
        printf("Month %d: %d\n", i + 1, new_expense[i]);

    printf("New total expense for %d months = %d\n", n1, total);

    free(new_expense);   
    new_expense = NULL;

    return 0;
}