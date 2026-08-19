#include<iostream>
#include <climits>
#include <algorithm>

using namespace std;
int main(){

    int arr[]={-10,-2,-3,-4,-5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int mx=INT_MIN;

    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
    }
    int smx=INT_MIN;
    for(int i=0;i<n;i++){
        if (arr[i]!=mx) smx=max(smx,arr[i]);
    }
    cout<<smx;
}