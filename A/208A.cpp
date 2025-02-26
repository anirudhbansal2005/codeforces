#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    char sub[] = "WUB";
    int x = s.size();
    int res = -1;
    vector<int> a;
    while ((res = s.find(sub, res + 1)) !=
            string::npos){
        a.push_back(res);
    }
    if(a.size()==0){
        cout<<s;
    }
    else {
        if(a.size()%2!=0){
            a.push_back(s.size());
        }
        for(int k=0; k<a[0]; k++){
            cout<<s[k];
        }
        if(0<a[0]){
            cout<<" ";
        }

        for(int i = 0; i<a.size()-1; i++){
            for(int j=a[i]+3; j<a[i+1]; j++){
                cout<<s[j];
            }
            if(a[i+1]-a[i]>3){
                cout<<" ";
            }
        }
        for(int k=a[a.size()-1]+3; k<x; k++){
            cout<<s[k];
        }
    }
}

// I KNOW THIS SOLUTION IS HORRIBLE XD