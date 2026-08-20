#include <iostream>
using namespace std;

int main() {

    int a[] = {1, -2, -3, -2, 1};

    int n = sizeof(a) / sizeof(a[0]);

    int i = 0;
    int j = n - 1;

    bool palindrome = true;

    while (i < j) {

        if (a[i] != a[j]) {
            palindrome = false;
            break;
        }

        i++;
        j--;
    }

    if (palindrome) {
        cout << "Palindrome";
    }
    else {
        cout << "Not a Palindrome";
    }

    return 0;
}