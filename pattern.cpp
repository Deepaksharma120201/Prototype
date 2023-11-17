#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cout<<"Enter Number of rows:\n";
    cin>>n;
    cout<<"The pattern is:"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}