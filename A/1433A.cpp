#include<bits/stdc++.h>
using namespace std;
int callAdd(string x){
    string num;
    int sum=0;
    bool InnerBreak = false;
    for(int i=1; i<10; i++){
        num = "";
        for(int j=0; j<4; j++){
            num += to_string(i);
            sum+=num.size();
            if(stoi(x)==stoi(num)){
                return sum;
            }
        }
        
    }
    return sum;
}

int main(){
    int cases;
    cin >> cases;
    string inp;
    int output;
    for(int i=0; i<cases; i++){
        cin >> inp;
        output = callAdd(inp);
        cout<<output<<"\n";
    }
}