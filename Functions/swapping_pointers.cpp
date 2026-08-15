#include<iostream>
using namespace std;

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a;
    cout<<"Enter 1st no: ";
    cin>>a;

    int b;
    cout<<"Enter 2nd no: ";
    cin>>b;

    cout<<a<<" "<<b<<endl;

    swap(&a,&b);
    
    cout<<a<<" "<<b<<endl;

}