#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
bool isPalindrome(string s, int removableMoves){
    int count = 0;
    unordered_map<char, int> palindrome;
    for(int i=0; i<s.size(); i++){
        palindrome[s[i]]++;
    }
    for(auto i: palindrome){
        if(i.second%2==1){
            count++;
        }
    }
    if(count<=removableMoves || palindrome.size()<2 || count-1==removableMoves){
        return true;
    }
    return false;
}
int main(){
    fastio;
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        if(isPalindrome(s, b)){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}