#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter atsring:";
    cin>>s;
    int freq[26] = {0};
    for( char ch:s){
        if( ch>='a'&& ch<='z'){
            freq[ch-'a']++;
        }
    }
    for( int i=0;i<26;i++){
        if(freq[i]>0){
            cout<<char(i+'a')<<":"<<freq[i]<<endl;
        }
    }
}