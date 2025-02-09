#include<bits/stdc++.h>
using namespace std;
void littleX(set<int>& x){
    int p, temp;
    cin >> p;
    for(int i=0; i<p; i++){
        cin >> temp;
        x.insert(temp);
    }
}
void littleY(set<int>& x){
    int p, temp;
    cin >> p;
    for(int i=0; i<p; i++){
        cin >> temp;
        x.insert(temp);
    }    
}

int main(){
    int level;
    cin >> level;
    set<int> m;
    littleX(m);
    littleY(m);
    if(m.size()==level){
        cout<<"I become the guy.";
    }
    else {
        cout<<"Oh, my keyboard!";
    }
}