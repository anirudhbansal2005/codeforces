#include<bits/stdc++.h>
using namespace std;
bool isVowel(string str, int x, string& vowel1){
    for(int i=x; i<str.size(); i++){
        for(int j=0; j<vowel1.size(); j++){
            if(str[i]==vowel1[j]){
                return true;
            }
        }
        return false;
    }
    return false;
}
int main(){
    string str;
    cin >> str;
    string newstr = "";
    string newstr2 = "";
    string vowel1 = "aoyeui";
    for(int i=0; i<str.size(); i++){
        newstr2+=tolower(str[i]);
    }
    for(int i=0; i<str.size(); i++){
        if(!isVowel(newstr2, i, vowel1)){
            newstr+=".";
            newstr+=newstr2[i];
        }
    }

    cout<<newstr;
}