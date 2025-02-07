#include<bits/stdc++.h>
using namespace std;
int main(){
    string first;
    string second;
    cin >> first;
    cin >> second;
    string temp1, temp2;
    bool eq = 0;
    int fs, ss;
    fs = first.size();
    ss = second.size();
    for(int i=0; i<fs; i++){
        temp1 = tolower(first[i]);
        temp2 = tolower(second[i]);
        if(temp1>temp2){
            cout<<1;
            eq = 0;
            break;
        }
        else if(temp1<temp2){
            cout<<-1;
            eq = 0;
            break;

        }
        else {
            eq = 1;
        }
    }
    if(eq){
        cout<<0;
    }
}