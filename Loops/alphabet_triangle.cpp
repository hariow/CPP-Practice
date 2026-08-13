#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            if(i%2==0){
                cout<<(char)(j+65)<<" ";
            }         
            else{
                cout<<j+1<<" ";
            }
        }
        cout<<endl;
    }
    
}