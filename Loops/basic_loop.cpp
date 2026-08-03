// Display G.P.--> 1,2,4,8,16,32......

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter a number: "; //G.P.--> 1,2,4,8,16,32......
    cin>>n;
    int a=1;

    for(int i=0;i<n;i++){
        cout<<a<<" ";
        a*=2;
    }

}