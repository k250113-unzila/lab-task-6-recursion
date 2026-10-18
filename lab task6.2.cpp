#include <iostream>
using namespace std;

void printEven(int n);   // forward declaration, needed because the functions call each other

// Handles odd numbers, then hands over to printEven
void printOdd(int n) {
    if (n > 15)          // base case
        return;
    cout << n << " ";
    printEven(n + 1);    // calls the other function
}

// Handles even numbers, then hands over to printOdd
void printEven(int n) {
    if (n > 15)          // base case
        return;
    cout << n << " ";
    printOdd(n + 1);     // calls the first function again
}

int main() {
    printOdd(1);
    cout << endl;
    return 0;
}
