#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    bool lucky = 1;
    int length = str.size();
    for(int i= 0; i<length; i++){
        if(str[i]!='4' && str[i]!='7'){
           lucky = 0;
           break;
        }
        else if (length==1) {
            lucky = 0;
            break;
        }
    }
    if(lucky){
        cout<<"YES";
    }
    else {
        cout<<"NO";

    }
    
}