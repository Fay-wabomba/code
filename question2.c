#include <stdio.h>

int main() {
    int bookID, dueDay, dueMonth, dueYear, returnDay, returnMonth, returnYear, daysOverdue;

    //bookID
    printf("Enter the book ID: ");
    scanf("%d", &bookID);

    //due date
    printf("Enter the due date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &dueDay, &dueMonth, &dueYear);

    // return date
    printf("Enter the return date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &returnDay, &returnMonth, &returnYear);

    // Convert due date to YYYYMMDD format for calculation
    int dueDate = dueYear * 10000 + dueMonth * 100 + dueDay;

    // Convert return date to YYYYMMDD format for calculation
    int returnDate = returnYear * 10000 + returnMonth * 100 + returnDay;

    // Calculate days overdue
    daysOverdue = returnDate - dueDate;

    // Output days overdue
    printf("Days overdue: %d\n", daysOverdue);

    return 0;
}
