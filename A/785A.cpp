#include<bits/stdc++.h>
using namespace std;
int compareString(string x){
    vector<string> y = {"Tetrahedron", "4", "Cube", "6", "Octahedron", "8", "Dodecahedron", "12", "Icosahedron", "20"};
    for(int i=0; i<(y.size()/2); i+=2){
        if(y[i].compare(0, (y[i].size()-1), x)==0){
           return stoi(y[i+1]);
        }
    }
    return 0;
}
int main(){
    int t;
    cin >> t;
    int sum = 0;
    string str;
    for(int i=0; i<t; i++){
        cin >> str;
        sum += compareString(str);
    }
    cout<<sum;
}