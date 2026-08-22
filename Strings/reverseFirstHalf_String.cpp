#include <algorithm>
#include<iostream>
#include<string>

using namespace std;
int main(){

    string s = "Hariom";
    cout<<s<<endl;

    int n = s.length();

    reverse(s.begin(),s.begin()+n/2);    // reverse first half 
    cout<<s<<endl;

    int i=0;
    int j=n/2-1;  /// for all char reverse --> n-1

    while(i<j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    cout<<s<<endl;
}