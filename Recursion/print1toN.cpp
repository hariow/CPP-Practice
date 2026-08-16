#include<iostream>
using namespace std;

void print(int x,int n){
    if (x>n) return;
    cout<<x<<endl;
    print(x+1,n);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print(1,n);
}


// without Extraparameter

#include<iostream>
using namespace std;

void print(int n){
    if (n==0) return;
    cout<<n<<endl;
    print(n-1);
}
int main(){
    print(5);
}