// without using Extraparameter

#include<iostream>
using namespace std;

void print(int n){
    if (n==0) return;
    print(n-1);      // this lines first
    cout<<n<<endl;   // second line 
    
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print(n);
}
 