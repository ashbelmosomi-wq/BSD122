//
// Created by Administrator on 24/05/2026.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int marks, attendance;

    // Prompt user for input
    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter exam marks (0-100): ";
    cin >> marks;

    cout << "Enter attendance percentage (0-100): ";
    cin >> attendance;

    // Validate marks and attendance
    if (marks < 0 || marks > 100 || attendance < 0 || attendance > 100) {
        cout << "Invalid input. Marks and attendance must be between 0 and 100." << endl;
        return 1;
    }

    string scholarship;

    // Nested if statements to determine scholarship
    if (marks >= 70) {
        if (attendance >= 80) {
            scholarship = "Full Scholarship";
        } else {
            scholarship = "Partial Scholarship";
        }
    }
    else if (marks >= 50) {  // marks between 50 and 69
        if (attendance >= 85) {
            scholarship = "Partial Scholarship";
        } else {
            scholarship = "No Scholarship";
        }
    }
    else {  // marks below 50
        scholarship = "No Scholarship";
    }

    // Display result
    cout << "\nStudent: " << name << endl;
    cout << "Scholarship: " << scholarship << endl;

    return 0;
}