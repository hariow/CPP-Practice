#include<iostream>
using namespace std;
int main(){

    int a[]={-10,-2,-3,-4,-5};
    int n=sizeof(a)/sizeof(a[0]);
    int b[n];
    
    for(int i=0;i<n;i++){
        b[i] = a[n-1-i];
        cout<<b[i]<<" ";
    }

}