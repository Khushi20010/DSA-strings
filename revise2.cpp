#include<iostream>
#include<string>
using namespace std;
string compressString(string s){
    int count=1;
    string ans = "";
    for( int i=1;i<s.length(); i++){
        if(i<s.length() && s[i]==s[i-1]){
            count++;
        }
        else{
            ans+= s[i-1];
            ans+=to_string(count);
            count=1;
        }
    }
    return ans;
}
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    cout<<"compressed string is: "<<compressString(s)<<endl;
    return 0;
}