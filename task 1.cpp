//
// Created by Administrator on 24/05/2026.
//
#include <iostream>
using namespace std;

int main() {
    // i. Input from user
    int bookID, dueDate, returnDate;

    cout << "Enter Book ID: ";
    cin >> bookID;

    cout << "Enter Due Date (as an integer, e.g., 1-31): ";
    cin >> dueDate;

    cout << "Enter Return Date (as an integer, e.g., 1-31): ";
    cin >> returnDate;

    // ii. Calculate days overdue
    int daysOverdue = returnDate - dueDate;

    // If returned on or before due date, overdue is 0 (no fine)
    if (daysOverdue < 0) {
        daysOverdue = 0;
    }

    // iii. Determine fine rate and calculate fine amount
    int fineRate;      // fine per day
    int fineAmount;    // total fine

    if (daysOverdue <= 7) {
        fineRate = 20;
    }
    else if (daysOverdue <= 14) {
        fineRate = 50;
    }
    else {
        fineRate = 100;
    }

    // Calculate total fine
    fineAmount = daysOverdue * fineRate;

    // iv. Display all required information
    cout << "\n--- Library Fine Details ---" << endl;
    cout << "Book ID:       " << bookID << endl;
    cout << "Due Date:      " << dueDate << endl;
    cout << "Return Date:   " << returnDate << endl;
    cout << "Days Overdue:  " << daysOverdue << endl;
    cout << "Fine Rate:     Ksh. " << fineRate << " per day" << endl;
    cout << "Fine Amount:   Ksh. " << fineAmount << endl;

    return 0;
}