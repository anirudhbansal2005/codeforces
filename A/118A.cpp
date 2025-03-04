#include<bits/stdc++.h>
using namespace std;
bool isVowel(string str){
    string vowel1 = "aoyeui";
    for(int i=0; i<str.size(); i++){
        for(int j=0; j<str.size(); j++){
            if(str[i]==vowel1[j]){
                return true;
            }
        }
        return false;
    }
    
}
int main(){
    string str;
    cin >> str;
    string newstr = "";
    string newstr2 = "";
    
    for(int i=0; i<str.size(); i++){
        if(!isVowel(str)){
            newstr+=str[i+1];
        }
    }
    for(int i=0; i<newstr.size(); i++){
        newstr2+=".";
        newstr2+=newstr[i];
    }
    cout<<newstr2;
}