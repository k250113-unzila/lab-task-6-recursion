#include <iostream>
using namespace std;

// Prints the sequence term by term.
// term = current value, step = number to add to get the next value
void printSequence(int term, int step, int count) {
    if (count == 0)              // base case: all terms printed
        return;
    cout << term << " ";
    printSequence(term + step, step + 1, count - 1);   // recursive call
}

int main() {
    printSequence(1, 2, 7);      // starts at 1, next step is +2, print 7 terms
    cout << endl;
    return 0;
}
