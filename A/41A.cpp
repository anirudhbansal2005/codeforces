#include<bits/stdc++.h>
using namespace std;
int main(){
    string og;
    cin >> og;
    string rev;
    string temp="";
    string temp2="";
    cin >> rev;
    bool eq=0;
    int length = og.size();
    int templength = length-1;
    if(length==(rev.size())){
        for(int i=0; i< length; i++){
            temp = og[templength];
            templength--; 
            temp2=rev[i];
            if(temp!=temp2){
                eq=0;
                break;
                temp="";
            }
            else {
                eq=1;
                temp="";
            }
        }
        if(eq){
            cout<<"YES";
        }
        else{
            cout<<"NO";

        }
    }
    else {
        cout<<"NO";
    }
}