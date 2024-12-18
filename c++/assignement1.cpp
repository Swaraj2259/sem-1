#include <iostream>
using namespace std;

// Function to find maximum among three numbers
void findMaximum() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    int maxNum = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    cout << "Maximum: " << maxNum << endl;
}


// Function to check whether a number is negative or positive
void checkSign() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0)
        cout << "Positive" << endl;
    else if (num < 0)
        cout << "Negative" << endl;
    else
        cout << "Zero" << endl;
}

// Function to check whether a number is even or odd
void checkEvenOdd() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;
}

// Function to check whether a year is a leap year
void checkLeapYear() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        cout << "Leap Year" << endl;
    else
        cout << "Not a Leap Year" << endl;
}

// Function to print the week day based on week number
void printWeekDay() {
    int weekNumber;
    cout << "Enter week number (1-7): ";
    cin >> weekNumber;
    switch (weekNumber) {
        case 1: cout << "Monday" << endl; break;
        case 2: cout << "Tuesday" << endl; break;
        case 3: cout << "Wednesday" << endl; break;
        case 4: cout << "Thursday" << endl; break;
        case 5: cout << "Friday" << endl; break;
        case 6: cout << "Saturday" << endl; break;
        case 7: cout << "Sunday" << endl; break;
        default: cout << "Invalid input!" << endl;
    }
}

// Function to print number of days in a month
void printDaysInMonth() {
    int monthNumber;
    cout << "Enter month number (1-12): ";
    cin >> monthNumber;
    switch (monthNumber) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "31 days" << endl; break;
        case 4: case 6: case 9: case 11:
            cout << "30 days" << endl; break;
        case 2:
            cout << "28 or 29 days" << endl; break;
        default:
            cout << "Invalid input!" << endl;
    }
}

// Function to calculate gross salary
void calculateGrossSalary() {
    float basicSalary, HRA, DA, grossSalary;
    cout << "Enter basic salary: ";
    cin >> basicSalary;

    if (basicSalary <= 10000) {
        HRA = 0.2 * basicSalary;
        DA = 0.8 * basicSalary;
    } else if (basicSalary <= 20000) {
        HRA = 0.25 * basicSalary;
        DA = 0.9 * basicSalary;
    } else {
        HRA = 0.3 * basicSalary;
        DA = 0.95 * basicSalary;
    }

    grossSalary = basicSalary + HRA + DA;
    cout << "Gross Salary: " << grossSalary << endl;
}

// Main function
int main() {
    findMaximum();
    checkSign();
    checkEvenOdd();
    checkLeapYear();
    printWeekDay();
    printDaysInMonth();
    calculateGrossSalary();
    return 0;
}
