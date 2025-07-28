#include<iostream>
#include<string>
using namespace std;
bool isAlphaNumeric(char ch){
    return( (ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9'));
}
char toLower(char ch){
    if( (ch>='A'&& ch<='Z')){
        return ch-'A' + 'a';
    }
    return ch;
}
bool isPalindrome(string s){
    int st=0 , e=s.length()-1;
    while(st<e){
  while(st<e && !isAlphaNumeric(s[st]))st++;
    while(st<e && !isAlphaNumeric(s[e]))e--;
    if(toLower(s[st])!=toLower(s[e])){
        return false;
    }
    else{
        st++;
        e--;
    }
   
    }
   return true;

    
}
int main(){
    string input;
    cout<<"Enter a string:";
    getline(cin,input);
    if(isPalindrome(input))
    cout<<"yes it is valid palindrome"<<endl;
    else
        cout<<"no  it is not a  valid palindrome"<<endl;
    return 0;
}