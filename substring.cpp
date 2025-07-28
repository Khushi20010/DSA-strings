#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    cout<<"all substring is: \n";


int n=s.length();
for( int i=0;i<n; i++){
    for( int len=1;len<=n-1;len++){
        cout<<s.substr(i,len)<<endl;
    }
}}