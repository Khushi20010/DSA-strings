#include<iostream>
#include<algorithm>
using namespace std;
bool isAnagram(string s, string t){
    if(s.length() != t.length())

    
    return false;
    sort(s.begin() ,s.end());
    sort(t.begin() , t.end());
    return s==t;
}
int main(){
    string str1 , str2;
    cout<<"Enter string 1: ";
    cin>>str1;
      cout<<"Enter string 2: ";
    cin>>str2;
    if(isAnagram(str1 , str2))
        cout<<"both strings are anagram"<<endl;
       
    
     else
            cout<<"both strings are not annagram"<<endl;
        
return 0;
}