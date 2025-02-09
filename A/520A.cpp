#include<bits/stdc++.h>
using namespace std;
void checkPalgram(int& x, string& y){
    set<char> z(y.begin(), y.end());
    if(z.size()==26){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
}
int main(){
    int letter;
    cin >> letter;
    string str;
    cin >> str;
    string temp; 
    for(int i=0; i<letter; i++){
        temp += tolower(str[i]);
    }
    checkPalgram(letter, temp);
}