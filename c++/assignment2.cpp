
#include <iostream>
using namespace std;

// Function to print multiplication table
void multiplicationTable() {
    int num;
    cout << "Enter a number for multiplication table: ";
    cin >> num;
    for (int i = 1; i <= 10; ++i) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

// Function to calculate sum of digits
void sumOfDigits() {
    int num, sum = 0;
    cout << "\nEnter a number to calculate sum of digits: ";
    cin >> num;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    cout << "Sum of digits: " << sum << endl;
}

// Function to find power of a number using for loop
void powerOfNumber() {
    int base, power, result = 1;
    cout << "\nEnter base: ";
    cin >> base;
    cout << "Enter power: ";
    cin >> power;
    for (int i = 1; i <= power; ++i) {
        result *= base;
    }
    cout << base << " raised to the power " << power << " is: " << result << endl;
}

// Function to reverse a number
void reverseNumber() {
    int num, reverse = 0;
    cout << "\nEnter a number to reverse: ";
    cin >> num;
    while (num != 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    cout << "Reversed number: " << reverse << endl;
}

// Function to print star pattern
void starPattern() {
    cout << "\nStar pattern:" << endl;
    for (int i = 5; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Function to print number pyramid (increasing sequence)
void numberPyramidIncreasing() {
    cout << "\nNumber pyramid (increasing sequence):" << endl;
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }
        cout << endl;
    }
}

// Function to print number pyramid (repeated digits)
void numberPyramidRepeated() {
    cout << "\nNumber pyramid (repeated digits):" << endl;
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << i;
        }
        cout << endl;
    }
}

// Function to print continuous number pyramid
void continuousNumberPyramid() {
    cout << "\nContinuous number pyramid:" << endl;
    int count = 1;
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << count << " ";
            ++count;
        }
        cout << endl;
    }
}

// Function to print alphabet pyramid
void alphabetPyramid() {
    cout << "\nAlphabet pyramid:" << endl;
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << char('A' + j - 1);
        }
        cout << endl;
    }
}

int main() {
    // Call all functions one by one
    multiplicationTable();
    sumOfDigits();
    powerOfNumber();
    reverseNumber();
    starPattern();
    numberPyramidIncreasing();
    numberPyramidRepeated();
    continuousNumberPyramid();
    alphabetPyramid();
    return 0;
}