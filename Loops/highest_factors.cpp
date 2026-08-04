// Finding the highest factor of a number 'n' 

#include <iostream>
using namespace std;
int main(){

    int n;

    cout<<"Enter a number: ";
    cin>>n;

    int f=1;

    for(int i=n/2;i>=1;i--){
        if(n%2==0){
            f=i;
            break;
        }
    }
    cout<<f;


}