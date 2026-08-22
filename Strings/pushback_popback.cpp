#include<iostream>
using namespace std;
int main(){

    string s ="Hariom";
    cout<<s<<" "<<s.length()<<endl;

    s.push_back('a');                 // Harioma
    cout<<s<<" "<<s.length()<<endl;

    s.pop_back();                     // renoves last character
    cout<<s<<" "<<s.length()<<endl;
 
    s.append(" Acharya");             // append string at last
    cout<<s<<" "<<s.length()<<endl;

    s.clear();                       // make existing string--> empty
    cout<<s<<" "<<s.length()<<endl;
}