#include <iostream>
using namespace std;

void funcB(int term, int step, int count);   // forward declaration

void funcA(int term, int step, int count) {
    if (count == 0)                          // base case
        return;
    cout << term << " ";
    funcB(term + step, step + 1, count - 1); // calls the other function
}

void funcB(int term, int step, int count) {
    if (count == 0)                          // base case
        return;
    cout << term << " ";
    funcA(term + step, step + 1, count - 1); // calls the first function again
}

int main() {
    funcA(1, 2, 7);
    cout << endl;
    return 0;
}
