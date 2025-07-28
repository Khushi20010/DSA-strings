#include<iostream>
using namespace std;
bool isVowel(char ch){
    ch=tolower(ch);
    return(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');

}
int maxVowel(string s,int n){
    int count=0 , maxV=0;
    for(int i=0;i<s.length(); i++){
        if(isVowel(s[i])) count++;

if(i>=n && isVowel(s[i-n]))count--;
if(i>=n-1)
maxV=max(maxV,count);
    }
return maxV;
}
int main(){
    string s;
    int n;
    cout<<"Enter a string: ";
    cin>>s;

    cout<<"Enter a window size: ";
    cin>>n;
    cout<<"Max Vowel of nay substring of size "<<n <<":"<<maxVowel(s,n);
    return 0;
}
   