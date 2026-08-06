// Counting number of digits

#include<iostream>
using namespace std;
int main(){
    
    int n;
    int count=0;

    cout<<"Enter a number: "; //1234
    cin>>n;

    while (n>0){
        n=n/10;
        count++;
    }

    cout<<"Number of Digits= "<< count;

}