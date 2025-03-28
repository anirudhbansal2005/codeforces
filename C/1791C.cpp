#include<bits/stdc++.h>
using namespace std;
int prependAppend(string s){
    int front = 0;
    int temp=0;
    int end = s.size()-1;
    while(front<=end){
        if((s[front]=='0' && s[end]=='1') || (s[front]=='1' && s[end]=='0')){
            temp+=2;
            end--;
            front++;
        }
        else {
            return s.size()-temp;
        }
    }
    return 0;
}
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        string s;
        int p;
        cin >> p >> s;
        cout<<prependAppend(s)<<"\n";
    }
}