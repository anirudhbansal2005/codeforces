#include<bits/stdc++.h>
using namespace std;
int main(){
    string ogstr;
    string newstr;
    cin >> ogstr;
    int long long lower=0;
    int long long upper=0;
    int long long length = ogstr.size();
    for(int i = 0; i < length; i++){
        if (islower(ogstr[i])) {
            lower++;
        }
        
        else {
            upper++;
        }
    }
    
    if (lower>=upper) {
        for(int i=0; i<length; i++){
            newstr = tolower(ogstr[i]);
            cout<<newstr;
        }
        
    }

    else if (lower<upper) {
        for(int i=0; i <length; i++){
            newstr = toupper(ogstr[i]);
            cout<<newstr;
        }
        // cout<<newstr;
    }
}