// Sum of Digits

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";  // 123
    cin>>n;
    
    int sum=0;

    while(n>0){
        sum+=(n%10);
        n=n/10;
    }

    cout<<"sum of digit: " <<sum;
}