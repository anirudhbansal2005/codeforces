#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1;
    string str2;
    cin >> str1 >> str2;
    int length = str1.size();
    for(int i=0; i<length; i++){
        if(str1[i]!=str2[i]){
            cout<<1;
        }
        else {
            cout<<0;
        }
    }
}