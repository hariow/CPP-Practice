// addition of two matrix

#include<iostream>
using namespace std;

int main(){

    int a[4][2]={{1,2},{3,4},{5,6},{7,8}};
    int b[4][2]={{9,10},{11,12},{13,14},{15,16}};
    int c[4][2];
    
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}