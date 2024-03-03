#include <stdio.h>

int main() {
    int bookID, dueDay, dueMonth, dueYear, returnDay, returnMonth, returnYear;
    int daysOverdue, fineRate, fineAmount;

    
    printf("Enter the book ID: ");
    scanf("%d", &bookID);

    
    printf("Enter the due date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &dueDay, &dueMonth, &dueYear);

    
    printf("Enter the return date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &returnDay, &returnMonth, &returnYear);

    
    int dueDate = dueYear * 10000 + dueMonth * 100 + dueDay;
    int returnDate = returnYear * 10000 + returnMonth * 100 + returnDay;
    daysOverdue = returnDate - dueDate;

    
    if (daysOverdue <= 7) {
        fineRate = 20;
    } else if (daysOverdue <= 14) {
        fineRate = 50;
    } else {
        fineRate = 100;
    }

    
    fineAmount = daysOverdue * fineRate;

    // Output book information
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %02d/%02d/%04d\n", dueDay, dueMonth, dueYear);
    printf("Return Date: %02d/%02d/%04d\n", returnDay, returnMonth, returnYear);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: KSH %d per day\n", fineRate);
    printf("Fine Amount: KSH %d\n", fineAmount);

    return 0;
}
