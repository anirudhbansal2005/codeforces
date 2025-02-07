#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    string newstr;
    cin >> str;
    int length = str.size();
    char ch = toupper(str[0]);
    for(int i = 1; i <length; i++){
        newstr+=str[i];
    }
    cout<<ch<<newstr;
    
}