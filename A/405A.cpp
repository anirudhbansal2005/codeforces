#include<bits/stdc++.h>
using namespace std;
int main(){
    int c;
    cin >> c;
    vector<int> box(c);
    for(int i = 0; i<c; i++){
        cin >> box[i];
    }
    sort(box.begin(), box.end());
    for(int i=0; i<c; i++){
        cout<<box[i]<<" ";
    }
}