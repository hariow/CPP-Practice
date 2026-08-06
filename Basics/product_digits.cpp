// Products of Digits

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";  // 123
    cin>>n;
    
    int product=1;

    while(n>0){
        product=product*(n%10);
        n=n/10;
    }

    cout<<product;
}