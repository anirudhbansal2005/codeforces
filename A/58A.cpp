#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    int y = 0;
    string vowel1 = "hello";
    for(int i=0; i<str.size(); i++){
        if(str[i]==vowel1[y]){
            y++;
        }
        if(y==vowel1.size()){
            cout<<"YES";
            return 0;
            }
        }
    cout<<"NO";
}