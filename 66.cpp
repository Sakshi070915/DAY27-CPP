#include <iostream>
using namespace std;

// Recursive function to calculate sum of first N natural numbers
int sumOfNaturalNumbers(int n) {
    if (n == 1) // Base case
        return 1;
    return n + sumOfNaturalNumbers(n - 1); // Recursive call
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 0;
    }

    cout << "Sum of first " << n << " natural numbers is: " 
         << sumOfNaturalNumbers(n) << endl;
    return 0;
}
