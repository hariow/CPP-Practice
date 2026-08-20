#include<iostream>
using namespace std;
int main(){

    int a[]={-10,-2,-3,-4,-5};
    int n=sizeof(a)/sizeof(a[0]);
    int b[n];
    
    for(int i=0;i<n;i++){
        b[i] = a[n-1-i];
        cout<<b[i]<<" ";
    }

}   

// Reverse an array without using any extra array

#include <iostream>
using namespace std;

int main() {

    int a[] = {-10, -2, -3, -4, -5};

    int n = sizeof(a) / sizeof(a[0]);

    int i = 0;
    int j = n - 1;

    // Print original array
    for (int k = 0; k < n; k++) {
        cout << a[k] << " ";
    }

    // Reverse the array
    while (i < j) {

        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;

        i++;
        j--;
    }

    cout << endl;

    // Print reversed array
    for (int k = 0; k < n; k++) {
        cout << a[k] << " ";
    }

    return 0;
}