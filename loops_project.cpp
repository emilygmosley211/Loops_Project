//************************************************************************
//Author.....: Emily Mosley
//Assignment.:Interactive Math & String Utility Program
//************************************************************************
#include <iostream>
#include <string>
using namespace std;

// Function Prototypes
void factorialCalculator();
void numberPyramid();
void sumEvenOrOdd();
void reverseString();
void fibonacciSeries();
void palindromeCheck();

int main() {
    int choice;
    do {
        cout << "\n========= Interactive Utility Program =========\n";
        cout << "1. Factorial Calculator\n";
        cout << "2. Number Pyramid\n";
        cout << "3. Sum of Even or Odd Numbers\n";
        cout << "4. Reverse a String\n";
        cout << "5. Fibonacci Series\n";
        cout << "6. Palindrome Check\n";
        cout << "7. Exit\n";
        cout << "==============================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: factorialCalculator(); break;
            case 2: numberPyramid(); break;
            case 3: sumEvenOrOdd(); break;
            case 4: reverseString(); break;
            case 5: fibonacciSeries(); break;
            case 6: palindromeCheck(); break;
            case 7: cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 7);

    return 0;
}

void factorialCalculator() {
    int n, factorial = 1;
    cout << "Enter a positive integer: ";
    cin >> n;
    int i = 1;
    while (i <= n) {
        factorial *= i;
        i++;
    }
    cout << "Factorial of " << n << " is: " << factorial << "\n";
}

void numberPyramid() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++)
            cout << " ";
        for (int k = 1; k <= i; k++)
            cout << k << " ";
        cout << "\n";
    }
}

void sumEvenOrOdd() {
    int n, sum = 0, choice;
    cout << "Choose: 1 for Even, 2 for Odd: ";
    cin >> choice;
    cout << "Enter upper limit: ";
    cin >> n;
    int i = (choice == 1) ? 2 : 1;
    do {
        sum += i;
        i += 2;
    } while (i <= n);
    cout << "Sum of " << ((choice == 1) ? "even" : "odd") << " numbers up to " << n << ": " << sum << "\n";
}

void reverseString() {
    string str, reversed = "";
    cout << "Enter a string: ";
    cin >> str;
    int i = str.length() - 1;
    while (i >= 0) {
        reversed += str[i];
        i--;
    }
    cout << "Reversed string: " << reversed << "\n";
}

void fibonacciSeries() {
    int n, t1 = 0, t2 = 1, nextTerm;
    cout << "Enter number of terms: ";
    cin >> n;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    cout << "\n";
}

void palindromeCheck() {
    string str, reversed = "";
    cout << "Enter a string: ";
    cin >> str;
    int i = str.length() - 1;
    while (i >= 0) {
        reversed += str[i];
        i--;
    }
    if (str == reversed)
        cout << "The string is a palindrome.\n";
    else
        cout << "The string is not a palindrome.\n";
}
