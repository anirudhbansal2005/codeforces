#include<bits/stdc++.h>
using namespace std;
void minimizeValue(int x, int y){
    vector<int> sol;
    for(int c=x; c<=y; c++){
        sol.push_back((c-x)+(y-c));
    }
    cout<< *min_element(sol.begin(), sol.end())<<"\n";
    
}
int main(){
    int cases;
    cin >> cases;
    for(int i=0; i<cases; i++){
        int a, b;
        cin >> a >> b;
        minimizeValue(a, b);
    }
}