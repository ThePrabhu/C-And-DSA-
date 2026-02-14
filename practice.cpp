#include <iostream>
using namespace std;

int main() {
    int numRev = 12345;
    int reverse = 0;
    int temp = numRev; // copy for counting later

    // Reverse the number
    while(numRev > 0) {
        reverse = reverse * 10 + numRev % 10;
        numRev /= 10;
    }
    cout << "Reversed: " << reverse << endl;

    // Count digits using the copy
    int count = 0;
    while (temp > 0) {
        int digit = temp % 10;
        count++;
        temp /= 10;
    }
    cout << "Digit count: " << count << endl;

    return 0;
}