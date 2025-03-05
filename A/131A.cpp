#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, s2 = "";
    cin >> s;
    int count = 0;
    
    for(int i=0; i<s.size(); i++){
        count+= isupper(s[i]);    
        s2+=tolower(s[i]);
    }
    if((count==s.size()-1 && islower(s[0]))){
        s2[0] = toupper(s2[0]);
        cout<<s2;
    }
    else if(count==s.size()){
        cout<<s2;
    }
    else {
        cout<<s;
    }
    
}