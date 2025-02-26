#include<bits/stdc++.h>
using namespace std;
bool compareString(string x){
    int y = x.size();
    int count0 = 0, count1 = 0;
    for(int i=0; i<y; i++){
        if(x[i]=='1'){
            count1++;
            count0 = 0;
            if(count1>=7){
                return true;
                }
        }
        else if(x[i]=='0'){
            count0++;
            count1 = 0;
            if(count0>=7){
                return true;
            }
        }
    }
    return false;
    
}
int main(){
    string str;
    cin >> str;
    if(compareString(str)){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
}