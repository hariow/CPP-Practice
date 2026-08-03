// Finding Least Number

#include<iostream>
using namespace std;

int main(){

    int a,b,c;

    cout<<"Enter First no: ";
    cin>>a;
    cout<<"Enter Second no: ";
    cin>>b;
    cout<<"Enter Third no: ";
    cin>>c;

    if(a<b && a<c){
        cout<<a<<" is smallest";
    }
    else if(c<b && c<a){
        cout<<c<<" is smallest";
    }
    else{
        cout<<b<<" is smallest";
    }
}